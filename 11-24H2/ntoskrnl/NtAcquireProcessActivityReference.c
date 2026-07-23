/*
 * XREFs of NtAcquireProcessActivityReference @ 0x140A71250
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateActivityReference @ 0x140A71370 (PspCreateActivityReference.c)
 */

__int64 __fastcall NtAcquireProcessActivityReference(_QWORD *a1, ULONG_PTR a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 result; // rax
  PVOID v7; // rbx
  int ActivityReference; // edi
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( a3 )
    return 3221225713LL;
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( (int)result >= 0 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x63417350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v7 = Object;
      ActivityReference = PspCreateActivityReference(Object, v10);
      if ( ActivityReference >= 0 )
        *a1 = v10[0];
      ObfDereferenceObjectWithTag(v7, 0x63417350u);
      return (unsigned int)ActivityReference;
    }
  }
  return result;
}
