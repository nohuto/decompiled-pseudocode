/*
 * XREFs of ?UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18020AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800299F0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::UpdateAttributes(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  int v2; // ebp
  char *v3; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, _QWORD); // rbx
  unsigned int *v10; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this - 44);
  v3 = (char *)this - 248;
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this - 31) + 48LL))((char *)this - 248, &v11);
  CDxHandleBitmapRealization::UpdateAttributes(this, a2);
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    if ( v2 != *((_DWORD *)this - 44) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 144LL))(v6 + 16);
    v7 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v3 + 48LL))(v3, &v12);
    if ( v11 != *v7 )
    {
      v8 = *((_QWORD *)this + 10);
      v9 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v8 + 16) + 152LL);
      v10 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v3 + 48LL))(v3, &v12);
      v9(v8 + 16, *v10);
    }
  }
}
