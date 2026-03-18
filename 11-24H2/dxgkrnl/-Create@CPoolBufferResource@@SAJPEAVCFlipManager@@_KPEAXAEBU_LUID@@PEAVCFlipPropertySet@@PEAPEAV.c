/*
 * XREFs of ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x14005076C
 * Callers:
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140050650 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x140019614 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1400509FC (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x140050A28 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403C4A70 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CPoolBufferResource::Create(
        struct CFlipManager *a1,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5,
        struct CPoolBufferResourceState **a6)
{
  CFlipResource *v7; // rdi
  PVOID v8; // r14
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rsi
  NTSTATUS v15; // ebx
  NTSTATUS v17; // eax
  CFlipResource *Pool2; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // cl
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID v24; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(a3, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
  v14 = Object;
  v15 = v13;
  if ( v13 >= 0 )
  {
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v15 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( v15 >= 0 )
    {
      v24 = 0LL;
      v17 = ObReferenceObjectByHandle(Handle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v24, 0LL);
      v8 = v24;
      v15 = v17;
      if ( v17 >= 0 )
      {
        Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 96LL, 1919042374LL);
        v7 = Pool2;
        if ( Pool2 )
        {
          CFlipResource::CFlipResource(Pool2, a2, a5);
          v19 = (__int64)*a4;
          *((_DWORD *)v7 + 20) = 0;
          *((_QWORD *)v7 + 9) = v19;
          *(_QWORD *)v7 = &CPoolBufferResource::`vftable';
          *((_QWORD *)v7 + 6) = a1;
          *((_QWORD *)v7 + 7) = v14;
          *((_QWORD *)v7 + 8) = v8;
          *((_QWORD *)v7 + 11) = _InterlockedIncrement64(&CPoolBufferResource::s_nextUniqueId);
          v20 = DXGQUOTAALLOCATOR<256,1935819590>::operator new();
          if ( v20 )
          {
            v21 = *(_BYTE *)(v20 + 32);
            *(_QWORD *)v20 = &CFlipResourceState::`vftable';
            *(_QWORD *)(v20 + 24) = v7;
            *(_BYTE *)(v20 + 32) = v21 & 0xF0 | 1;
            *(_QWORD *)(v20 + 16) = v20 + 8;
            *(_QWORD *)(v20 + 8) = v20 + 8;
            ++*(_DWORD *)(*(_QWORD *)(v20 + 24) + 24LL);
            *(_QWORD *)v20 = &CPoolBufferResourceState::`vftable';
            *a6 = (struct CPoolBufferResourceState *)v20;
          }
          else
          {
            v15 = -1073741801;
          }
          goto LABEL_6;
        }
        v7 = 0LL;
        v15 = -1073741801;
      }
    }
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v8 )
    ObfDereferenceObject(v8);
LABEL_6:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v7 )
    CFlipResource::Release(v7);
  return (unsigned int)v15;
}
