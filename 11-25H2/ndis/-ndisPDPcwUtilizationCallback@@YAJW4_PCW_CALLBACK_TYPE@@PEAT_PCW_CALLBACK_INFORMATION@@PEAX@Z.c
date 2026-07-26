/*
 * XREFs of ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x140083500
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCountSetBits64@@YAK_K@Z @ 0x1400AC1BC (-ndisCountSetBits64@@YAK_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x14016BFA0 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?ReleaseExclusive@KPushLockBase@@QEAAXXZ @ 0x14016CA10 (-ReleaseExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?AcquireExclusive@KPushLockBase@@QEAAXXZ @ 0x14016CFF0 (-AcquireExclusive@KPushLockBase@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPDPcwUtilizationCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  KPushLockBase *v3; // rbx
  NTSTATUS v6; // edi
  unsigned __int8 v7; // r8
  KPushLockBase *v8; // rax
  KPushLockBase *Value; // rbx
  unsigned __int64 i; // r14
  ULONG v12; // r8d
  struct _PCW_BUFFER *Buffer; // rcx
  ULONG InstanceId; // eax
  unsigned int v15; // eax
  ULONG v16; // r8d
  struct _PCW_BUFFER *v17; // rcx
  unsigned int v18; // ebx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  struct _PCW_DATA v20; // [rsp+40h] [rbp-48h] BYREF
  KLockHolder v21; // [rsp+50h] [rbp-38h] BYREF

  v3 = qword_140127008;
  v21.m_Lock = qword_140127008;
  v6 = 0;
  KeEnterCriticalRegion();
  v21.m_Region.m_Entered = 1;
  KPushLockBase::AcquireExclusive(v3);
  v8 = qword_140127008;
  v21.m_State = Exclusive;
  Value = (KPushLockBase *)qword_140127008[1].m_Lock.Value;
LABEL_2:
  if ( Value == &v8[1] )
  {
LABEL_3:
    KPushLockBase::ReleaseExclusive(v21.m_Lock);
    KeLeaveCriticalRegion();
    return (unsigned int)v6;
  }
  for ( i = Value[6].m_Lock.Value; ; i = *(_QWORD *)i )
  {
    if ( (KPushLockBase *)i == &Value[6] )
    {
      Value = (KPushLockBase *)Value->m_Lock.Value;
      v8 = qword_140127008;
      goto LABEL_2;
    }
    if ( a1 != 2 )
      break;
    v12 = *(_DWORD *)(i + 32);
    Buffer = a2->EnumerateInstances.Buffer;
    Data.Data = 0LL;
    Data.Size = 64;
    v6 = PcwAddInstance(Buffer, (PCUNICODE_STRING)(i + 40), v12, 1u, &Data);
    if ( v6 < 0 )
      goto LABEL_3;
LABEL_13:
    ;
  }
  if ( a1 < 2 )
  {
    if ( ndisWildCardStringMatch(a2->AddCounter.InstanceMask, (const struct _UNICODE_STRING *)(i + 40), v7) )
    {
      v15 = ndisCountSetBits64(a2->AddCounter.CounterMask);
      if ( a1 == 1 )
        v15 = -v15;
      _InterlockedAdd((volatile signed __int32 *)(i + 36), v15);
    }
    goto LABEL_13;
  }
  if ( a1 != 3 )
    goto LABEL_13;
  InstanceId = a2->EnumerateInstances.InstanceId;
  if ( InstanceId != -1 && InstanceId != *(_DWORD *)(i + 32) )
    goto LABEL_13;
  v16 = *(_DWORD *)(i + 32);
  v17 = a2->EnumerateInstances.Buffer;
  v20.Data = (const void *)(i + 56);
  v20.Size = 64;
  v18 = PcwAddInstance(v17, (PCUNICODE_STRING)(i + 40), v16, 1u, &v20);
  KLockHolder::~KLockHolder(&v21);
  return v18;
}
