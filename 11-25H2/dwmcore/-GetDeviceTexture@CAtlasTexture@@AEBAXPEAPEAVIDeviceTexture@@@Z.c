/*
 * XREFs of ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18019E4EC
 * Callers:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019E284 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801A1490 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAtlasTexture::GetDeviceTexture(CAtlasTexture *this, struct IDeviceTexture **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v4; // rdi
  void (__fastcall *v5)(_QWORD *, __int64, struct IDeviceTexture **); // rbx
  __int64 v6; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 1);
  v4 = v2 + 1;
  v5 = *(void (__fastcall **)(_QWORD *, __int64, struct IDeviceTexture **))(v2[1] + 96LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v2 + 88LL))(v2, v7);
  v5(v4, v6, a2);
}
