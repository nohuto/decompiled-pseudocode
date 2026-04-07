/*
 * XREFs of ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800E47E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000D4E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailVisual::EndTransition(CThumbnailVisual *this)
{
  struct tagPOINT *v2; // rcx
  _DWORD *v3; // rax
  int v4; // edx
  int v5; // ecx
  LONG v6; // eax
  LONG v7; // eax
  __int64 v8; // rax
  CBaseObject *v9; // rcx
  struct tagPOINT v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 481) )
  {
    v2 = (struct tagPOINT *)*((_QWORD *)this + 47);
    if ( v2 )
    {
      v10 = v2[5];
      CVisual::SetOffset((struct tagPOINT *)this, &v10);
      v3 = (_DWORD *)*((_QWORD *)this + 47);
      v4 = v3[13] - v3[11];
      v5 = v3[12] - v3[10];
      v6 = 0;
      if ( v5 >= 0 )
        v6 = v5;
      v10.x = v6;
      v7 = 0;
      if ( v4 >= 0 )
        v7 = v4;
      v10.y = v7;
      (*(void (__fastcall **)(CThumbnailVisual *, struct tagPOINT *))(*(_QWORD *)this + 104LL))(this, &v10);
      if ( !*((_BYTE *)this + 364) )
      {
        v8 = *((_QWORD *)this + 47);
        if ( (*(_BYTE *)(v8 + 36) & 4) != 0 )
          CVisual::SetOpacity(this, (double)*(unsigned __int8 *)(v8 + 72) / 255.0);
      }
      CThumbnailVisual::SetDirtyFlags(this, 4096);
    }
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 59);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 59) = 0LL;
  }
  CThumbnailVisual::SetDirtyFlags(this, 0x8000);
  *((_BYTE *)this + 481) = 0;
}
