/*
 * XREFs of ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401EDE3C
 * Callers:
 *     NtDxgkRegisterVailProcess @ 0x140209830 (NtDxgkRegisterVailProcess.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x14034D1D8 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x140037548 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003DDC0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x140207608 (-SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::SetVailObject(DXGPROCESS *this, struct DXGVAILOBJECT *a2)
{
  DXGVAILOBJECT *v4; // rcx

  v4 = (DXGVAILOBJECT *)*((_QWORD *)this + 72);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DXGVAILOBJECT::SetHandleProcess(v4, 0LL);
      DxgkCompositionObject::Release(*((DxgkCompositionObject **)this + 72));
      *((_QWORD *)this + 72) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 72) = a2;
      DxgkCompositionObject::AddRef(a2);
      DXGVAILOBJECT::SetHandleProcess(*((DXGVAILOBJECT **)this + 72), *((struct _EPROCESS **)this + 7));
    }
  }
}
