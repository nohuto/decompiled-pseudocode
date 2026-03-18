/*
 * XREFs of _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014835C
 * Callers:
 *     CleanupKeyboardLayouts @ 0x14020FB14 (CleanupKeyboardLayouts.c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyKL @ 0x14006379C (DestroyKL.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 */

int *__fastcall lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  int *result; // rax

  v2 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v2[2] != v2 )
  {
    do
    {
      v4 = (_QWORD *)v2[2];
      DestroyKL(v2);
      v2 = v4;
    }
    while ( (_QWORD *)v4[2] != v4 );
  }
  if ( (*(_BYTE *)(HMPheFromObject((int *)a2) + 25) & 1) == 0 )
    HMMarkObjectDestroy((struct _HEAD *)a2);
  HYDRA_HINT(0x8000LL);
  result = HMUnlockObject((int *)a2);
  if ( result )
    return (int *)DestroyKL(v2);
  return result;
}
