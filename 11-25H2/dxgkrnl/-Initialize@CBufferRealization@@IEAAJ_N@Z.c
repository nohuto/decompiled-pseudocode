/*
 * XREFs of ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1400095C4
 * Callers:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1400093AC (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403D0EF0 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CBufferRealization::Initialize(PVOID *this, char a2)
{
  __int64 Win32kImportTable; // rax
  NTSTATUS v5; // edi
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  PVOID v7; // rcx
  PVOID v8; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (__fastcall **)(char *))(Win32kImportTable + 40))((char *)this + 72);
  if ( v5 >= 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      if ( a2 )
      {
        ObfReferenceObject(this[4]);
        v8 = this[4];
      }
      else
      {
        SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
        v7 = this[4];
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(v7, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
        v8 = Object;
      }
      this[4] = 0LL;
      this[8] = v8;
    }
  }
  return (unsigned int)v5;
}
