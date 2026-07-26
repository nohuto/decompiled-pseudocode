/*
 * XREFs of NdisPDStartup @ 0x1400AD180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x1401445E8 (--_GNDIS_PD_CLIENT@@QEAAPEAXI@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1401484B8 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x140148A30 (-ndisPDReferenceClientDriver@@YAEPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDStartup(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3, KPushLockBase **a4, _QWORD *a5)
{
  char v6; // r15
  unsigned int v10; // ebx
  KPushLockBase *PoolWithTag; // rax
  KPushLockBase *v12; // rdi
  unsigned __int64 *v13; // rax
  unsigned int v14; // edx
  struct KPushLockBase *v15; // rdx
  KPushLockBase *i; // rax
  ULONG ClearBitsAndSet; // eax
  KPushLockBase *v18; // rax
  KPushLockBase **Value; // rdx
  __int64 v21; // [rsp+38h] [rbp-40h]
  KLockThisExclusive v22; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x13u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      a2,
      a3);
  *a4 = 0LL;
  if ( (unsigned __int8)(*a1 - 3) <= 1u )
  {
    PoolWithTag = (KPushLockBase *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x6341444Eu);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[10].m_Lock.Value = 0LL;
      PoolWithTag[11].m_Lock.Value = 0LL;
      PoolWithTag[12].m_Lock.Value = 0LL;
      *(_WORD *)&PoolWithTag[13].m_Lock.0 = 0;
      PoolWithTag[1].m_Lock.Value = 0LL;
      PoolWithTag->m_Lock.Value = 0LL;
      v13 = (unsigned __int64 *)&PoolWithTag[2];
      v13[1] = (unsigned __int64)v13;
      *v13 = (unsigned __int64)v13;
      v12[5].m_Lock.Value = (unsigned __int64)&v12[4];
      v12[4].m_Lock.Value = (unsigned __int64)&v12[4];
      v12[7].m_Lock.Value = (unsigned __int64)&v12[6];
      v12[6].m_Lock.Value = (unsigned __int64)&v12[6];
      v12[9].m_Lock.Value = (unsigned __int64)&v12[8];
      v12[8].m_Lock.Value = (unsigned __int64)&v12[8];
      if ( ndisPDReferenceClientDriver(a1) )
      {
        v15 = qword_140127008;
        v6 = 1;
        v12[10].m_Lock.Value = (unsigned __int64)a1;
        v12[11].m_Lock.Value = a2;
        v12[12].m_Lock.Value = a3;
        *a4 = v12;
        *a5 = &unk_1400FC3F0;
        KLockThisExclusive::KLockThisExclusive(&v22, v15);
        for ( i = (KPushLockBase *)qword_140127008[1].m_Lock.Value;
              i != &qword_140127008[1];
              i = (KPushLockBase *)i->m_Lock.Value )
        {
          if ( (_BYTE *)i[10].m_Lock.Value == a1 )
          {
            v10 = -1073740008;
LABEL_15:
            KLockHolder::~KLockHolder(&v22);
            goto LABEL_16;
          }
        }
        ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)&qword_140127008[3], 1u, 0);
        if ( ClearBitsAndSet == -1 )
        {
          v10 = -1073741618;
          goto LABEL_15;
        }
        *(_WORD *)&v12[13].m_Lock.0 = ClearBitsAndSet;
        v18 = qword_140127008 + 1;
        Value = (KPushLockBase **)qword_140127008[2].m_Lock.Value;
        if ( *Value != &qword_140127008[1] )
          __fastfail(3u);
        v12->m_Lock.Value = (unsigned __int64)v18;
        v12[1].m_Lock.Value = (unsigned __int64)Value;
        *Value = v12;
        v18[1].m_Lock.Value = (unsigned __int64)v12;
        KLockHolder::~KLockHolder(&v22);
        v10 = 0;
      }
      else
      {
        v10 = -1073741436;
LABEL_16:
        NDIS_PD_CLIENT::`scalar deleting destructor'((NDIS_PD_CLIENT *)v12, v14);
        if ( v6 )
          ndisPDDereferenceClientDriver(a1);
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741788;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v10;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x14u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)*a4,
      v21);
  }
  return v10;
}
