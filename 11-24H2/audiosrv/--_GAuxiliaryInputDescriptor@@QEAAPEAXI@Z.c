/*
 * XREFs of ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x180075950
 * Callers:
 *     ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800A2A10 (--1-$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800BF97C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     ??1?$unique_ptr@UAuxiliaryInputDescriptor@@U?$default_delete@UAuxiliaryInputDescriptor@@@std@@@std@@QEAA@XZ @ 0x1800F3E3C (--1-$unique_ptr@UAuxiliaryInputDescriptor@@U-$default_delete@UAuxiliaryInputDescriptor@@@std@@@s.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall AuxiliaryInputDescriptor::`scalar deleting destructor'(void **this)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(this + 1);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
