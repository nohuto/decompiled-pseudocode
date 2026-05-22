/*
 * XREFs of ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x18015F370
 * Callers:
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800FA384 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z @ 0x18015F154 (--0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18015F458 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorManager::Create(__int64 a1, __int64 a2, __int64 a3, CursorManager **a4)
{
  unsigned int v6; // ebx
  void *v8; // rax
  CursorManager *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)0x80070057LL);
    return v6;
  }
  v8 = RefCountedObject::operator new(0x60uLL);
  if ( v8 )
    v9 = (CursorManager *)CursorManager::CursorManager((__int64)v8, a1);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)0x8007000ELL);
    return v6;
  }
  v10 = CursorManager::Initialize(v9);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(CursorManager *))(*(_QWORD *)v9 + 16LL))(v9);
    return v11;
  }
}
