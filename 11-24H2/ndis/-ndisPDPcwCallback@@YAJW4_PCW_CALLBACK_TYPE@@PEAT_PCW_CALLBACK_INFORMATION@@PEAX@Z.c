/*
 * XREFs of ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1400654E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x14013B7C0 (-NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z.c)
 *     ?ReleaseExclusive@KPushLockBase@@QEAAXXZ @ 0x140160970 (-ReleaseExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?AcquireExclusive@KPushLockBase@@QEAAXXZ @ 0x140160F50 (-AcquireExclusive@KPushLockBase@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPDPcwCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  int v3; // ebp
  NTSTATUS v4; // esi
  KPushLockBase *v8; // r13
  KPushLockBase *v9; // rcx
  KPushLockBase *Value; // rdi
  KPushLockBase *v11; // r12
  struct NDIS_PD_COUNTER_HANDLE__ *v12; // rax
  struct NDIS_PD_COUNTER_HANDLE__ *v13; // rcx
  ULONG InstanceId; // ecx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-68h] BYREF
  struct NDIS_PD_COUNTER_HANDLE__ *v16; // [rsp+40h] [rbp-58h]
  union _NDIS_PD_COUNTER_VALUE v17; // [rsp+48h] [rbp-50h] BYREF

  v3 = (int)a3;
  Data.Data = 0LL;
  v4 = 0;
  *(_QWORD *)&Data.Size = 0LL;
  if ( a1 <= 1 )
    return 0LL;
  v8 = qword_14011CF58;
  KeEnterCriticalRegion();
  KPushLockBase::AcquireExclusive(v8);
  v9 = qword_14011CF58;
  Value = (KPushLockBase *)qword_14011CF58[1].m_Lock.Value;
  if ( Value != &qword_14011CF58[1] )
  {
    do
    {
      v11 = (KPushLockBase *)Value[2].m_Lock.Value;
      if ( v11 != &Value[2] )
      {
        do
        {
          v12 = (struct NDIS_PD_COUNTER_HANDLE__ *)v11[12].m_Lock.Value;
          v13 = (struct NDIS_PD_COUNTER_HANDLE__ *)&v11[12];
          while ( 1 )
          {
            v16 = v12;
            if ( v12 == v13 )
              break;
            if ( *((_DWORD *)v12 + 14) == v3 )
            {
              if ( a1 == 2 )
              {
                v4 = PcwAddInstance(
                       a2->EnumerateInstances.Buffer,
                       (PCUNICODE_STRING)v12 + 6,
                       *((_DWORD *)v12 + 17),
                       1u,
                       &Data);
                if ( v4 < 0 )
                  break;
                v12 = v16;
              }
              else
              {
                InstanceId = a2->EnumerateInstances.InstanceId;
                if ( InstanceId == -1 || InstanceId == *((_DWORD *)v12 + 17) )
                {
                  memset(&v17, 0, sizeof(v17));
                  NdisPDPIQueryCounter(v12, &v17);
                  Data.Data = &v17;
                  if ( v3 == 1 )
                  {
                    Data.Size = 24;
                  }
                  else if ( (unsigned int)(v3 - 2) < 2 )
                  {
                    Data.Size = 16;
                  }
                  else
                  {
                    Data.Size = 0;
                  }
                  v4 = PcwAddInstance(
                         a2->EnumerateInstances.Buffer,
                         (PCUNICODE_STRING)v16 + 6,
                         *((_DWORD *)v16 + 17),
                         1u,
                         &Data);
                  break;
                }
              }
              v13 = (struct NDIS_PD_COUNTER_HANDLE__ *)&v11[12];
            }
            v12 = *(struct NDIS_PD_COUNTER_HANDLE__ **)v12;
          }
          v11 = (KPushLockBase *)v11->m_Lock.Value;
        }
        while ( v11 != &Value[2] );
        v9 = qword_14011CF58;
      }
      Value = (KPushLockBase *)Value->m_Lock.Value;
    }
    while ( Value != &v9[1] );
  }
  KPushLockBase::ReleaseExclusive(v8);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
