/*
 * XREFs of ?HasSinglePrimitive@CCompositionDynamicTexture@@UEBA_NXZ @ 0x180295630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCompositionDynamicTexture::HasSinglePrimitive(CCompositionDynamicTexture *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 232LL))(v1);
  else
    return 1;
}
