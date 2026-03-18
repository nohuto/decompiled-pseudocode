/*
 * XREFs of xxxCreateWindowSmIcon @ 0x14007AC48
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x14021F460 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x14007ACF4 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rax

  v5 = a2;
  LOBYTE(a2) = 3;
  v6 = 0LL;
  v8 = HMValidateHandleNoRip(v5, a2, a3, a4);
  if ( v8 )
  {
    DpiForSystem = GetDpiForSystem(v7);
    DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
    v12 = GetDpiForSystem(v11);
    v13 = GetDpiDependentMetric(20, v12);
    v14 = xxxClientCopyImage(
            *(_QWORD *)v8,
            (unsigned int)(*(_WORD *)(v8 + 74) != 3) + 1,
            v13,
            DpiDependentMetric,
            0x4000);
    if ( v14 )
    {
      v6 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 )
      {
        *(_DWORD *)(v14 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v6;
      }
    }
  }
  return v6;
}
