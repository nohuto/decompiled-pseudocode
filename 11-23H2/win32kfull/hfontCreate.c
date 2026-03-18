/*
 * XREFs of hfontCreate @ 0x1C00C4ED0
 * Callers:
 *     NtGdiHfontCreate @ 0x1C006EFA0 (NtGdiHfontCreate.c)
 *     GreCreateFontIndirectW @ 0x1C00C4BF8 (GreCreateFontIndirectW.c)
 *     bInitStockFontsInternal @ 0x1C03B33B8 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C03B37A0 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C03B3C6C (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C03B55BC (bInitSystemFont.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00C7CC4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     cCapString @ 0x1C01177C8 (cCapString.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0264924 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // ebp
  _DWORD *Object; // rax
  struct OBJECT *v12; // rbx
  Gre::Base *v13; // rcx
  struct HOBJ__ *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v20; // rbx
  __int64 ProcessWow64Process; // rax
  __int64 v22; // rdx
  int v23; // ecx
  _BYTE v24[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h]

  if ( !Src )
    return 0LL;
  v9 = Src[88];
  if ( v9 > 0x10 )
    return 0LL;
  v10 = 4 * v9 + 356;
  Object = (_DWORD *)AllocateObject(4 * v9 + 632, 10LL, 0LL);
  v12 = (struct OBJECT *)Object;
  if ( !Object )
    return 0LL;
  Object[6] = a2;
  Object[7] = a3;
  Object[68] = v10;
  memmove(Object + 69, Src, v10);
  *((_DWORD *)v12 + 8) = 0;
  *((_DWORD *)v12 + 9) = *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v13) + 241) + 1573016LL);
  cCapString((char *)v12 + 208, Src + 7, 32LL);
  Src[3] = lNormAngle((unsigned int)Src[3]);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v24);
  v14 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v24, v12, 0xAu, a5);
  if ( !v14 )
  {
    FreeObject(v12, 10LL);
    if ( v25 )
      _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
    return 0LL;
  }
  v16 = HmgPentryFromPobj(v12);
  if ( a4 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
    v20 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v22 = *((unsigned int *)v20 + 73);
    v23 = *((_DWORD *)v20 + 73);
    if ( ProcessWow64Process )
      v17 = (unsigned int)__ROR4__(a4 ^ v22, v23 & 0x1F);
    else
      v17 = __ROR8__(a4 ^ v22, v23 & 0x3F);
  }
  else
  {
    v17 = 0LL;
  }
  *(_QWORD *)(v16 + 16) = v17;
  if ( v25 )
    _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
  return v14;
}
