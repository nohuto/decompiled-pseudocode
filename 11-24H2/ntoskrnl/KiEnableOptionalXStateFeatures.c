/*
 * XREFs of KiEnableOptionalXStateFeatures @ 0x1403F5AF8
 * Callers:
 *     KiPreprocessFault @ 0x1403F4D80 (KiPreprocessFault.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     KxEnableOptionalXStateFeatures @ 0x1405B6354 (KxEnableOptionalXStateFeatures.c)
 */

__int64 __fastcall KiEnableOptionalXStateFeatures(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  bool v4; // zf
  __int64 result; // rax
  int v8; // esi
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+40h] [rbp-10h]
  char v12; // [rsp+60h] [rbp+10h] BYREF

  v12 = 0;
  v2 = 0LL;
  v3 = 0LL;
  v4 = (*(_DWORD *)(a1 + 116) & 0x800000) == 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( v4 )
  {
    DWORD2(v9) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
    *(_QWORD *)&v9 = 0x500000020LL;
    *(_QWORD *)&v10 = a1;
    result = MmCreateKernelStack((int *)&v9);
    if ( (int)result < 0 )
      return result;
    v3 = *((_QWORD *)&v10 + 1);
    v2 = *((_QWORD *)&v10 + 1) - (unsigned int)KeDecoupledStateSaveAreaLength;
  }
  v8 = KxEnableOptionalXStateFeatures(a1, a2, v2, &v12);
  if ( v8 < 0 || !v12 )
  {
    if ( v3 )
    {
      v9 = 0x500000008uLL;
      v11 = 0LL;
      *(_QWORD *)&v10 = a1;
      *((_QWORD *)&v10 + 1) = v3;
      MmDeleteKernelStack((int *)&v9);
    }
  }
  return (unsigned int)v8;
}
