/*
 * XREFs of MiCaptureHotPatchInfo @ 0x1407F28D8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlFindHotPatchBaseMachine @ 0x14082F88C (RtlFindHotPatchBaseMachine.c)
 *     RtlFindHotPatchInformation @ 0x14082F8F4 (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x14082FBA0 (RtlValidateHotPatchBase.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCaptureHotPatchInfo(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  char *v9; // rdi
  unsigned __int64 v10; // r14
  unsigned int v11; // ebx
  __int64 HotPatchInformation; // rax
  const void *v13; // rbx
  ULONG_PTR v14; // rsi
  char *Pool; // rax
  _DWORD *HotPatchBaseMachine; // rsi

  *a7 = 0LL;
  v9 = 0LL;
  v10 = (unsigned __int64)*(unsigned int *)(a1 + 16) << 12;
  if ( v10 > 0xFFFFFFFF )
  {
LABEL_2:
    v11 = -1073741701;
    goto LABEL_12;
  }
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)a1);
  v13 = (const void *)HotPatchInformation;
  if ( HotPatchInformation )
  {
    v14 = *(unsigned int *)(HotPatchInformation + 4);
    Pool = (char *)MiAllocatePool(0x40uLL, v14, 1313427528);
    v9 = Pool;
    if ( Pool )
    {
      memmove(Pool, v13, v14);
      HotPatchBaseMachine = (_DWORD *)RtlFindHotPatchBaseMachine(v9, a5);
      if ( (unsigned __int8)RtlValidateHotPatchBase((_DWORD)v9, (_DWORD)HotPatchBaseMachine, a2, v10) )
      {
        if ( HotPatchBaseMachine[3] == a3 && HotPatchBaseMachine[2] == a4 )
        {
          *a7 = &v9[HotPatchBaseMachine[6]];
          *a6 = v9;
          v9 = 0LL;
          v11 = 0;
        }
        else
        {
          v11 = -1073741735;
        }
        goto LABEL_12;
      }
      goto LABEL_2;
    }
    v11 = -1073741670;
  }
  else
  {
    v11 = -1073741701;
  }
LABEL_12:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v11;
}
