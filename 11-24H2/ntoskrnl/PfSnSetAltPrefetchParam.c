/*
 * XREFs of PfSnSetAltPrefetchParam @ 0x140747784
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfSnAltProfileCleanup @ 0x1407475D0 (PfSnAltProfileCleanup.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnAltProfileFindByProcess @ 0x140939988 (PfSnAltProfileFindByProcess.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x140939A14 (PfSnAltProfileTreeCompareByProcess.c)
 *     PfSnCheckScenario @ 0x140960C4C (PfSnCheckScenario.c)
 *     PfSnAltProfileFindByScenarioId @ 0x14096192C (PfSnAltProfileFindByScenarioId.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x1409619C0 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x140961A08 (PfSnCalculateScenarioNameAndHash.c)
 *     PfCalculateProcessHash @ 0x140962000 (PfCalculateProcessHash.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnSetAltPrefetchParam(ULONG_PTR BugCheckParameter1, _DWORD *a2, int a3)
{
  unsigned __int64 v5; // r14
  int v6; // r15d
  int v7; // edi
  PVOID v8; // r12
  int v9; // ebx
  __int64 v10; // rcx
  void *Pool2; // rax
  __int64 v12; // rax
  _BOOL8 v13; // r8
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // edi
  bool v19; // r8
  unsigned __int64 v20; // rax
  PVOID Object; // [rsp+68h] [rbp-1E0h] BYREF
  int v23; // [rsp+70h] [rbp-1D8h] BYREF
  int v24; // [rsp+74h] [rbp-1D4h] BYREF
  int v25; // [rsp+78h] [rbp-1D0h] BYREF
  int v26; // [rsp+7Ch] [rbp-1CCh] BYREF
  int v27; // [rsp+80h] [rbp-1C8h] BYREF
  _DWORD v28[3]; // [rsp+84h] [rbp-1C4h] BYREF
  PVOID P; // [rsp+90h] [rbp-1B8h] BYREF
  _DWORD *v30; // [rsp+98h] [rbp-1B0h]
  __int64 v31; // [rsp+A8h] [rbp-1A0h]
  __int128 v32; // [rsp+B0h] [rbp-198h] BYREF
  wchar_t Str2[8]; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-178h]
  __int128 v35; // [rsp+E0h] [rbp-168h]
  __int128 v36; // [rsp+F0h] [rbp-158h]
  int v37; // [rsp+100h] [rbp-148h]
  _BYTE v38[256]; // [rsp+110h] [rbp-138h] BYREF

  v30 = a2;
  memset_0(Str2, 0, 0x44uLL);
  v32 = 0LL;
  v26 = 0;
  v23 = 0;
  v25 = 0;
  v24 = 0;
  v28[0] = 0;
  v27 = 0;
  P = 0LL;
  Object = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  v6 = 0;
  v7 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x73576650u, (__int64)&Object, 0LL, 0LL);
  if ( v7 < 0 )
  {
    v8 = Object;
  }
  else
  {
    v8 = Object;
    if ( Object != KeGetCurrentThread()->ApcState.Process )
    {
LABEL_3:
      v7 = -1073741811;
      goto LABEL_52;
    }
    if ( a3 != 4 )
    {
      v7 = -1073741820;
      goto LABEL_52;
    }
    LODWORD(v30) = *v30;
    v9 = (int)v30;
    if ( (unsigned int)v30 > 0x10 )
      goto LABEL_3;
    v7 = PfSnCheckScenario(0LL, &v27);
    if ( v7 >= 0 )
    {
      v7 = PfCalculateProcessHash(v8, &P);
      if ( v7 >= 0 )
      {
        Object = (PVOID)256;
        v7 = PfSnCalculateScenarioNameAndHash(v10, Str2, &v32, &v26, &v23, &v25, &v24, &Object, v38, v28, v8, P);
        if ( v7 >= 0 )
        {
          v37 = v23;
          HIDWORD(v36) = v26 + v25 + v24;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          v5 = (unsigned __int64)Pool2;
          if ( !Pool2 )
          {
            v7 = -1073741670;
            goto LABEL_52;
          }
          memset_0(Pool2, 0, 0x80uLL);
          *(_DWORD *)(v5 + 124) = v9;
          *(_QWORD *)(v5 + 48) = v8;
          *(_OWORD *)(v5 + 56) = *(_OWORD *)Str2;
          *(_OWORD *)(v5 + 72) = v34;
          *(_OWORD *)(v5 + 88) = v35;
          *(_OWORD *)(v5 + 104) = v36;
          *(_DWORD *)(v5 + 120) = v37;
          v8 = 0LL;
          v6 = 1;
          FsRtlAcquirePushLockExclusive(&qword_140E67138);
          v12 = PfSnAltProfileFindByScenarioId(Str2);
          if ( v12 )
          {
            if ( *(_QWORD *)(v5 + 48) != *(_QWORD *)(v12 + 48) )
            {
              v7 = -1073740008;
              goto LABEL_52;
            }
            *(_DWORD *)(v12 + 124) = v9;
          }
          else
          {
            Object = *(PVOID *)(v5 + 48);
            if ( PfSnAltProfileFindByProcess(Object) )
              goto LABEL_3;
            v14 = qword_140E67118;
            if ( (xmmword_140E67120 & 1) != 0 && qword_140E67118 )
              v14 = (unsigned __int64)&qword_140E67118 ^ qword_140E67118;
            v15 = xmmword_140E67120 & 1;
            LOBYTE(v13) = 0;
            if ( v14 )
            {
              while ( 1 )
              {
                if ( (int)PfSnAltProfileTreeCompareByProcess(Object, v14, v13) < 0 )
                {
                  v16 = *(_QWORD *)v14;
                  if ( v15 )
                  {
                    if ( !v16 )
                      goto LABEL_33;
                    v16 ^= v14;
                  }
                  if ( !v16 )
                  {
LABEL_33:
                    LOBYTE(v13) = 0;
                    break;
                  }
                }
                else
                {
                  v16 = *(_QWORD *)(v14 + 8);
                  if ( v15 )
                  {
                    if ( !v16 )
                      goto LABEL_27;
                    v16 ^= v14;
                  }
                  if ( !v16 )
                  {
LABEL_27:
                    LOBYTE(v13) = 1;
                    break;
                  }
                }
                v14 = v16;
              }
            }
            RtlRbInsertNodeEx(&qword_140E67118, v14, v13, v5);
            v17 = *((_QWORD *)&xmmword_140E67120 + 1);
            if ( (qword_140E67130 & 1) != 0 && *((_QWORD *)&xmmword_140E67120 + 1) )
              v17 = ((unsigned __int64)&xmmword_140E67120 + 8) ^ *((_QWORD *)&xmmword_140E67120 + 1);
            v18 = qword_140E67130 & 1;
            v19 = 0;
            if ( v17 )
            {
              while ( 1 )
              {
                if ( (int)PfSnAltProfileTreeCompareByScenarioId((wchar_t *)(v5 + 56)) < 0 )
                {
                  v20 = *(_QWORD *)v17;
                  if ( v18 )
                  {
                    if ( !v20 )
                      goto LABEL_49;
                    v20 ^= v17;
                  }
                  if ( !v20 )
                  {
LABEL_49:
                    v19 = 0;
                    break;
                  }
                }
                else
                {
                  v20 = *(_QWORD *)(v17 + 8);
                  if ( v18 )
                  {
                    if ( !v20 )
                      goto LABEL_43;
                    v20 ^= v17;
                  }
                  if ( !v20 )
                  {
LABEL_43:
                    v19 = 1;
                    break;
                  }
                }
                v17 = v20;
              }
            }
            RtlRbInsertNodeEx((__int64 *)&xmmword_140E67120 + 1, v17, v19, v5 + 24);
            VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E67138);
            v6 = 0;
            v5 = 0LL;
          }
          v7 = 0;
        }
      }
    }
  }
LABEL_52:
  if ( v6 )
    VmpReleasePushLockExclusive((volatile signed __int64 *)&qword_140E67138);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
  {
    PfSnAltProfileCleanup(v5);
    ExFreePoolWithTag((PVOID)v5, 0x66506343u);
  }
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x73576650u);
  return (unsigned int)v7;
}
