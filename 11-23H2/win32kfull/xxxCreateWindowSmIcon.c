/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C00924C8
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C003D2A4 (xxxGetWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00DE154 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022D48C (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxClientCopyImage @ 0x1C00DE700 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax

  v4 = a2;
  LOBYTE(a2) = 3;
  v6 = 0LL;
  v9 = HMValidateHandleNoRip(v4, a2);
  if ( v9 )
  {
    DpiForSystem = GetDpiForSystem(v8, v7);
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
    v14 = GetDpiForSystem(v13, v12);
    v15 = GetDpiDependentMetric(20LL, v14);
    v16 = xxxClientCopyImage(
            *(_QWORD *)v9,
            (unsigned int)(*(_WORD *)(v9 + 74) != 3) + 1,
            v15,
            DpiDependentMetric,
            a3 != 0 ? 0x4000 : 0);
    if ( v16 )
    {
      v6 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 )
      {
        *(_DWORD *)(v16 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v6;
        if ( !a3 )
          SetOrClrWF(1LL, a1, 1824LL, 1LL);
      }
    }
  }
  return v6;
}
