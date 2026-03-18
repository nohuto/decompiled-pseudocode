/*
 * XREFs of DestroyWindowSmIcon @ 0x1C013C988
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01569C0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022D48C (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C004829C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct tagCURSOR *v4; // rbx

  v2 = *(_QWORD *)(a1[5] + 264);
  if ( !v2 )
    return 0LL;
  v3 = HMValidateHandleNoRip(v2, 3);
  v4 = (struct tagCURSOR *)v3;
  if ( !v3 || (*(_DWORD *)(v3 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(a1[5] + 264) = 0LL;
  _DestroyCursor(v4, 0);
  return 1LL;
}
