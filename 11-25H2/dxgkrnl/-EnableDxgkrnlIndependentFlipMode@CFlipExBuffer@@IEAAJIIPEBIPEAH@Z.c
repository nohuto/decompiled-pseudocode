/*
 * XREFs of ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x140048D0C
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x140048B60 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkSetIndependentFlipMode @ 0x1403AC16C (DxgkSetIndependentFlipMode.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403D0EF0 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(
        CFlipExBuffer *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        int *a5)
{
  unsigned int v5; // edi
  NTSTATUS v10; // ebp
  __int64 v11; // rbp
  struct _OBJECT_TYPE *ObjectType; // rax
  __int64 v13; // rcx
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v5 = 0;
  v10 = -1073741275;
  if ( *((_DWORD *)this + 72) )
  {
    v11 = *((_QWORD *)this + 34);
    Handle = 0LL;
    if ( (unsigned int)(*(_DWORD *)(v11 + 16) - 2) > 2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
      v10 = ObOpenObjectByPointer(*(PVOID *)(v11 + 56), 0x200u, 0LL, 0xF0000u, ObjectType, 0, &Handle);
      if ( v10 >= 0 )
      {
        v10 = DxgkSetIndependentFlipMode(Handle, a2, a3, (__int64)a4, (__int64)a5, (__int64)this + 552);
        if ( v10 < 0 )
        {
          ObCloseHandle(Handle, 0);
        }
        else
        {
          *((_QWORD *)this + 70) = Handle;
          *((_DWORD *)this + 100) = 1;
          *((_DWORD *)this + 158) = a3;
          *((_DWORD *)this + 159) = a2;
          memset((char *)this + 568, 0, 0x40uLL);
          for ( ; a3; a3 >>= 1 )
          {
            if ( (a3 & 1) != 0 )
            {
              v13 = v5++;
              *((_DWORD *)this + v13 + 142) = a4[v13];
            }
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
