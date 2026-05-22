/*
 * XREFs of ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800FA384
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800F72B0 (-EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x180093264 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800F9E3C (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1800FA0BC (-EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ.c)
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x18015F370 (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 */

__int64 __fastcall SystemCursorService2::Initialize(SystemCursorService2 *this, int a2)
{
  int PermanentCursors; // ebx
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  PermanentCursors = SystemCursorServiceBase::InitializeBase((SystemCursorService2 *)((char *)this + 8));
  if ( PermanentCursors < 0 )
  {
    v5 = 39LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)PermanentCursors);
    return (unsigned int)PermanentCursors;
  }
  *((_DWORD *)this + 62) = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  PermanentCursors = CursorManager::Create(this, v7, v8, (char *)this + 48);
  if ( PermanentCursors < 0 )
  {
    v5 = 47LL;
    goto LABEL_3;
  }
  PermanentCursors = SystemCursorService2::CreatePermanentCursors(this);
  if ( PermanentCursors < 0 )
  {
    v5 = 49LL;
    goto LABEL_3;
  }
  PermanentCursors = SystemCursorService2::EnumerateCursorsForShell(this);
  if ( PermanentCursors < 0 )
  {
    v5 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}
