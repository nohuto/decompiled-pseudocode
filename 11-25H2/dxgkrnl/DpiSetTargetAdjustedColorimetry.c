/*
 * XREFs of DpiSetTargetAdjustedColorimetry @ 0x140188F5C
 * Callers:
 *     ?SetTargetAdjustedColorimetry@KernelDriver@@UEAAJU_DXGK_COLORIMETRY@@I@Z @ 0x1403EB910 (-SetTargetAdjustedColorimetry@KernelDriver@@UEAAJU_DXGK_COLORIMETRY@@I@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028918 (DpiFdoGetChildDescriptor.c)
 *     DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x14024DA4C (DpiDxgkDdiSetTargetAdjustedColorimetry.c)
 */

__int64 __fastcall DpiSetTargetAdjustedColorimetry(__int64 a1, int a2)
{
  unsigned int v2; // edx
  _QWORD *ChildDescriptor; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  _OWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+50h] [rbp-18h]

  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  result = 0LL;
  if ( !ChildDescriptor )
    return 3221225485LL;
  v7 = *(_QWORD *)(v4 + 40);
  if ( *((_BYTE *)ChildDescriptor + 65) )
  {
    if ( *(_DWORD *)(v7 + 28) >= 0x700Au )
    {
      v8 = *(_OWORD *)(v5 + 16);
      v9 = v2;
      v10 = *(_DWORD *)(v5 + 48);
      v11 = *(_QWORD *)(v4 + 48);
      v12[0] = *(_OWORD *)v5;
      v12[2] = *(_OWORD *)(v5 + 32);
      v12[1] = v8;
      v13 = v10;
      return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *))DpiDxgkDdiSetTargetAdjustedColorimetry)(
               v7,
               v11,
               v9,
               v12);
    }
  }
  return result;
}
