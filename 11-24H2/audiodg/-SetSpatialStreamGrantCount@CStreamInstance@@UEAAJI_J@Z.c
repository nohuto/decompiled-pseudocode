/*
 * XREFs of ?SetSpatialStreamGrantCount@CStreamInstance@@UEAAJI_J@Z @ 0x14006E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z @ 0x14006EB98 (-SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z.c)
 */

__int64 __fastcall CStreamInstance::SetSpatialStreamGrantCount(CStreamInstance *this, unsigned int a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v11 = v3;
  v7 = SetSpatialStreamGrantCountInternal((CStreamInstance *)((char *)this - 8), a2, a3);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BA,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v7);
  CSAutoLock<1>::~CSAutoLock<1>(&v11);
  return v8;
}
