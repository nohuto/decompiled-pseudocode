/*
 * XREFs of ??0ReacquireResourceWorkItem@@QEAA@K@Z @ 0x1800EA6C0
 * Callers:
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x18007B1E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 *     ?ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z @ 0x1800EEC50 (-ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z.c)
 * Callees:
 *     ??0ResourceHandleInfo@@QEAA@XZ @ 0x1800EA8F4 (--0ResourceHandleInfo@@QEAA@XZ.c)
 */

ReacquireResourceWorkItem *__fastcall ReacquireResourceWorkItem::ReacquireResourceWorkItem(
        ReacquireResourceWorkItem *this,
        int a2)
{
  __int64 v2; // r8
  ReacquireResourceWorkItem *result; // rax

  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = &ReacquireSaResourceWorkItem::`vftable';
  ResourceHandleInfo::ResourceHandleInfo((ReacquireResourceWorkItem *)((char *)this + 32));
  *(_QWORD *)(v2 + 16) = 0LL;
  result = (ReacquireResourceWorkItem *)v2;
  *(_DWORD *)(v2 + 488) = 0;
  return result;
}
