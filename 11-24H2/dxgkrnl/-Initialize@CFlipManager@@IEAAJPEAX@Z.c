/*
 * XREFs of ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005B280
 * Callers:
 *     ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14005B250 (-ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x140057DAC (-Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z.c)
 *     DxgkGetSessionFlipManagerRegistry @ 0x1400707CC (DxgkGetSessionFlipManagerRegistry.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x1400792CC (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkGetSharedSyncObjectType @ 0x1403E3DF0 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CFlipManager::Initialize(CFlipManager *this, void *a2)
{
  signed __int32 v3; // eax
  struct CDWMBackchannelManager *v4; // rbx
  PVOID v5; // r12
  struct _KEVENT *v6; // r14
  PVOID v7; // r13
  PVOID v8; // r15
  NTSTATUS SessionFlipManagerRegistry; // edi
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  HANDLE v12; // rdi
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  union _LARGE_INTEGER v16; // rax
  void (__fastcall *v17)(_QWORD); // rbx
  unsigned int TracingId; // eax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-49h] BYREF
  HANDLE v21; // [rsp+38h] [rbp-41h] BYREF
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  PVOID v23; // [rsp+48h] [rbp-31h] BYREF
  PVOID v24; // [rsp+50h] [rbp-29h] BYREF
  PVOID v25; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  struct CDWMBackchannelManager *v27; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE v28; // [rsp+E8h] [rbp+6Fh]
  void *EventHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  v28 = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 29) = 1LL;
  *((_QWORD *)this + 30) = 1LL;
  *((_QWORD *)this + 31) = 1LL;
  *((_QWORD *)this + 33) = 1LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  v3 = _InterlockedExchangeAdd(&CFlipManager::s_nextFlipManagerTracingId, 1u);
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 85) = v3 + 1;
  v4 = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  v5 = 0LL;
  *(_OWORD *)((char *)this + 360) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  v6 = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  v7 = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  v8 = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  *((_DWORD *)this + 84) = 0;
  EventHandle = 0LL;
  Handle = 0LL;
  v27 = 0LL;
  v21 = 0LL;
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline(1LL) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    SessionFlipManagerRegistry = DxgkGetSessionFlipManagerRegistry((struct IFlipManagerRegistry **)&PerformanceFrequency);
    if ( SessionFlipManagerRegistry < 0 )
      goto LABEL_15;
    (**(void (__fastcall ***)(union _LARGE_INTEGER, char *, char *))PerformanceFrequency.QuadPart)(
      PerformanceFrequency,
      (char *)this - 32,
      (char *)this + 344);
  }
  SessionFlipManagerRegistry = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( SessionFlipManagerRegistry >= 0 )
  {
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = Object;
    SessionFlipManagerRegistry = v10;
    if ( v10 >= 0 )
    {
      SessionFlipManagerRegistry = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( SessionFlipManagerRegistry >= 0 )
      {
        v23 = 0LL;
        v11 = ObReferenceObjectByHandle(Handle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v23, 0LL);
        v6 = (struct _KEVENT *)v23;
        SessionFlipManagerRegistry = v11;
        if ( v11 >= 0 )
        {
          v12 = v28;
          if ( !v28
            || (SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType(),
                v24 = 0LL,
                v14 = ObReferenceObjectByHandle(v12, 0x1F0000u, SharedSyncObjectType, 1, &v24, 0LL),
                v7 = v24,
                SessionFlipManagerRegistry = v14,
                v14 >= 0) )
          {
            SessionFlipManagerRegistry = CDWMBackchannelManager::Create(v6, &v27);
            if ( SessionFlipManagerRegistry < 0
              || (SessionFlipManagerRegistry = ZwCreateEvent(&v21, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0),
                  SessionFlipManagerRegistry < 0)
              || (v25 = 0LL,
                  v15 = ObReferenceObjectByHandle(v21, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v25, 0LL),
                  v8 = v25,
                  SessionFlipManagerRegistry = v15,
                  v15 < 0) )
            {
              v4 = v27;
            }
            else
            {
              *((_QWORD *)this + 36) = v5;
              *((_QWORD *)this + 37) = v6;
              v5 = 0LL;
              *((_QWORD *)this + 38) = v7;
              v6 = 0LL;
              v7 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              KeQueryPerformanceCounter(&PerformanceFrequency);
              v16 = PerformanceFrequency;
              *((_QWORD *)this + 40) = v8;
              *((_QWORD *)this + 39) = v16.QuadPart / 2;
              v8 = 0LL;
              *((_QWORD *)this + 28) = v27;
            }
          }
        }
      }
    }
  }
LABEL_15:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v4 )
    (**(void (__fastcall ***)(struct CDWMBackchannelManager *, __int64))v4)(v4, 1LL);
  if ( v21 )
    ZwClose(v21);
  if ( v8 )
    ObfDereferenceObject(v8);
  v17 = *(void (__fastcall **)(_QWORD))(DxgkGetWin32kImportTable() + 328);
  TracingId = CFlipManager::GetTracingId(this);
  v17(TracingId);
  return (unsigned int)SessionFlipManagerRegistry;
}
