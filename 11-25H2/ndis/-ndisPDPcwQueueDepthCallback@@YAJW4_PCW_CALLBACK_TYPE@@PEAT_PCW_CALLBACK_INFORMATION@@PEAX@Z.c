/*
 * XREFs of ?ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x14008E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCountSetBits64@@YAK_K@Z @ 0x1400AC1BC (-ndisCountSetBits64@@YAK_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x14016BFA0 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?ReleaseExclusive@KPushLockBase@@QEAAXXZ @ 0x14016CA10 (-ReleaseExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?AcquireExclusive@KPushLockBase@@QEAAXXZ @ 0x14016CFF0 (-AcquireExclusive@KPushLockBase@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPDPcwQueueDepthCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  KPushLockBase *v3; // rbx
  NTSTATUS v6; // edi
  unsigned __int8 v7; // r8
  KPushLockBase *v8; // rax
  KPushLockBase *Value; // rbx
  unsigned __int64 i; // r15
  __int64 *j; // r14
  ULONG InstanceId; // eax
  ULONG v13; // r8d
  struct _PCW_BUFFER *v14; // rcx
  unsigned int v15; // ebx
  ULONG v17; // r8d
  struct _PCW_BUFFER *Buffer; // rcx
  unsigned int v19; // eax
  struct _PCW_DATA v20; // [rsp+30h] [rbp-68h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-58h] BYREF
  KLockHolder v22; // [rsp+50h] [rbp-48h] BYREF

  v3 = qword_140127008;
  v22.m_Lock = qword_140127008;
  v6 = 0;
  KeEnterCriticalRegion();
  v22.m_Region.m_Entered = 1;
  KPushLockBase::AcquireExclusive(v3);
  v8 = qword_140127008;
  v22.m_State = Exclusive;
  Value = (KPushLockBase *)qword_140127008[1].m_Lock.Value;
  while ( Value != &v8[1] )
  {
    for ( i = Value[6].m_Lock.Value; (KPushLockBase *)i != &Value[6]; i = *(_QWORD *)i )
    {
      for ( j = *(__int64 **)(i + 120); j != (__int64 *)(i + 120); j = (__int64 *)*j )
      {
        if ( a1 < 2 )
        {
          if ( ndisWildCardStringMatch(a2->AddCounter.InstanceMask, (const struct _UNICODE_STRING *)j + 2, v7) )
          {
            v19 = ndisCountSetBits64(a2->AddCounter.CounterMask);
            if ( a1 == 1 )
              v19 = -v19;
            if ( !*(_DWORD *)(i + 136) )
              *(_QWORD *)(i + 152) = 0LL;
            _InterlockedAdd((volatile signed __int32 *)(i + 136), v19);
            if ( !*((_DWORD *)j + 12) )
              *(__int64 *)((char *)j + 52) = 0LL;
            _InterlockedAdd((volatile signed __int32 *)j + 12, v19);
          }
        }
        else if ( a1 == 2 )
        {
          v17 = *((_DWORD *)j + 6);
          Buffer = a2->EnumerateInstances.Buffer;
          v20.Data = 0LL;
          v20.Size = 8;
          v6 = PcwAddInstance(Buffer, (PCUNICODE_STRING)j + 2, v17, 1u, &v20);
          if ( v6 < 0 )
          {
            KLockHolder::~KLockHolder(&v22);
            return (unsigned int)v6;
          }
        }
        else if ( a1 == 3 )
        {
          InstanceId = a2->EnumerateInstances.InstanceId;
          if ( InstanceId == -1 || InstanceId == *((_DWORD *)j + 6) )
          {
            v13 = *((_DWORD *)j + 6);
            v14 = a2->EnumerateInstances.Buffer;
            Data.Data = (char *)j + 52;
            Data.Size = 8;
            v15 = PcwAddInstance(v14, (PCUNICODE_STRING)j + 2, v13, 1u, &Data);
            KLockHolder::~KLockHolder(&v22);
            return v15;
          }
        }
      }
    }
    Value = (KPushLockBase *)Value->m_Lock.Value;
    v8 = qword_140127008;
  }
  KPushLockBase::ReleaseExclusive(v22.m_Lock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
