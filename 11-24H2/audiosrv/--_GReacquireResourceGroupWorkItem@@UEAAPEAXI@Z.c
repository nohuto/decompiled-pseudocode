/*
 * XREFs of ??_GReacquireResourceGroupWorkItem@@UEAAPEAXI@Z @ 0x1800EB230
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x18007AC70 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ReacquireResourceGroupWorkItem *__fastcall ReacquireResourceGroupWorkItem::`scalar deleting destructor'(
        ReacquireResourceGroupWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &ReacquireSaResourceWorkItem::`vftable';
  ResourceHandleInfo::~ResourceHandleInfo((ReacquireResourceGroupWorkItem *)((char *)this + 32));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
