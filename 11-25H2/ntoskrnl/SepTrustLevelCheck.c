/*
 * XREFs of SepTrustLevelCheck @ 0x14035FC50
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 */

__int64 __fastcall SepTrustLevelCheck(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        _DWORD *Sid,
        char a6,
        int *a7)
{
  __int16 v7; // di
  unsigned int v8; // ebx
  char v9; // r15
  unsigned int v13; // r10d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int i; // edx
  int v18; // esi
  _DWORD *v19; // rdi
  PACCESS_TOKEN PrimaryToken; // rax
  void *v22; // r8
  __int64 v23; // r8
  _DWORD *v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *CurrentThread; // rax

  v7 = *(_WORD *)(a2 + 2);
  v8 = 0;
  v9 = 0;
  v13 = 0;
  if ( (v7 & 0x10) == 0 )
    goto LABEL_14;
  while ( 2 )
  {
    if ( v7 >= 0 )
    {
      v15 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v14 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v14 )
        break;
      v15 = a2 + v14;
    }
    if ( v15 )
    {
      v16 = v15 + 8;
      for ( i = 0; ; ++i )
      {
        if ( i >= *(unsigned __int16 *)(v15 + 4) )
          goto LABEL_14;
        if ( i >= v13 && *(_BYTE *)v16 == 20 )
          break;
        v16 += *(unsigned __int16 *)(v16 + 2);
      }
      if ( (*(_BYTE *)(v16 + 1) & 8) != 0 )
      {
        v13 = i + 1;
        if ( v16 )
          continue;
      }
      if ( !v16 )
        break;
      v18 = *(_DWORD *)(v16 + 4);
      v19 = (_DWORD *)(v16 + 8);
      if ( v16 == -8 )
        break;
      if ( a6 )
      {
        if ( a4 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
        }
        else
        {
          SeLockSubjectContext(a3);
        }
        v9 = 1;
      }
      if ( !a4 )
      {
        if ( a3->ClientToken )
        {
          PrimaryToken = a3->PrimaryToken;
          v22 = (void *)*((_QWORD *)a3->ClientToken + 138);
          if ( *((_QWORD *)PrimaryToken + 138) && !RtlIsValidProcessTrustLabelSid(*((PSID *)PrimaryToken + 138)) )
          {
            v8 = -1073741811;
            goto LABEL_33;
          }
          if ( !v22 )
          {
LABEL_23:
            if ( RtlIsValidProcessTrustLabelSid(v19) )
            {
              if ( v23 )
              {
                if ( *(_DWORD *)(v23 + 8) >= v19[2] && *(_DWORD *)(v23 + 12) >= v19[3] )
                  goto LABEL_27;
              }
              else if ( !v19[2] )
              {
LABEL_27:
                *a7 = -1;
                goto LABEL_33;
              }
              *a7 = v18 | 0x1000000;
            }
            else
            {
              v8 = -1073741811;
            }
LABEL_33:
            if ( v9 )
            {
              if ( a4 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              }
              else
              {
                SeUnlockSubjectContext(a3);
              }
            }
            return v8;
          }
          if ( !RtlIsValidProcessTrustLabelSid(v22) )
          {
            v8 = -1073741811;
            goto LABEL_33;
          }
          if ( v25 )
          {
            if ( *(_DWORD *)(v25 + 8) < v24[2] || *(_DWORD *)(v25 + 12) < v24[3] )
              goto LABEL_46;
LABEL_30:
            if ( v24 && !RtlIsValidProcessTrustLabelSid(v24) )
            {
              v8 = -1073741811;
              goto LABEL_33;
            }
            goto LABEL_23;
          }
          if ( !v24[2] )
            goto LABEL_30;
        }
LABEL_46:
        v24 = (_DWORD *)*((_QWORD *)a3->PrimaryToken + 138);
        goto LABEL_30;
      }
      v24 = Sid;
      goto LABEL_30;
    }
    break;
  }
LABEL_14:
  *a7 = -1;
  return v8;
}
