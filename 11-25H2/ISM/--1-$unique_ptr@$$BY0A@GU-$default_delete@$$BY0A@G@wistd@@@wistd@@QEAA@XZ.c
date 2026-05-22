/*
 * XREFs of ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAA@XZ @ 0x18009B73C
 * Callers:
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor$0 @ 0x1801C7E98 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Join_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$8 @ 0x1801CC4EE (_Microsoft--BamoImpl--BaseBamoConnectionImpl--BaseBamoConnectionImpl_--_1_--dtor$8.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::~unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    operator delete(v2, a2);
}
