/*
 * XREFs of ?ReleaseConnection@CConnectionNode@@QEAAXXZ @ 0x14000EF6C
 * Callers:
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140008DB0 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CDC0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConnectionNode::ReleaseConnection(CConnectionNode *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rax
  int v5; // r8d

  v2 = (__int64 *)((char *)this + 144);
  if ( *v2 )
    *((_QWORD *)this + 9) = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(v2);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (void *)AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 13), v4, v5);
  *((_QWORD *)this + 13) = 0LL;
}
