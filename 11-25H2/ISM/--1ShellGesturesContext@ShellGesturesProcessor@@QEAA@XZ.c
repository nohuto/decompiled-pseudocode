/*
 * XREFs of ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x180079820
 * Callers:
 *     ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x1800797EC (--1Context@ShellGesturesProcessor@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079864 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ShellGesturesProcessor::ShellGesturesContext::~ShellGesturesContext(
        ShellGesturesProcessor::ShellGesturesContext *this)
{
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((char *)this + 248);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((char *)this + 240);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((char *)this + 232);
  std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::~_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>((char *)this + 144);
}
