/*
 * XREFs of NtCreatePrivateNamespace @ 0x140A06400
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A06724 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A06B28 (ObpCaptureBoundaryDescriptor.c)
 *     ObpRegisterPrivateNamespace @ 0x140A06FB0 (ObpRegisterPrivateNamespace.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  int v4; // r15d
  char PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *v9; // rdi
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rbx
  int v12; // eax
  _QWORD *v13; // r15
  unsigned __int64 v14; // rbx
  size_t v15; // r8
  __int64 v16; // rcx
  NTSTATUS v17; // edi
  NTSTATUS inserted; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v21; // rdi
  __int64 *v22; // rax
  __int64 *v23; // r13
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  unsigned __int64 v29; // rtt
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h]
  __int64 v34; // [rsp+68h] [rbp-20h] BYREF

  v4 = (int)ObjectAttributes;
  Object = 0LL;
  v34 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v30 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v30 = (__int64)NamespaceHandle;
    *(_QWORD *)v30 = *(_QWORD *)v30;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v9 = P;
    v10 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v10 >= 0 )
    {
      v11 = (unsigned int)(*((_DWORD *)P + 6) + 392);
      if ( v11 < *((_QWORD *)P + 3) )
      {
        v10 = -1073741811;
      }
      else
      {
        v12 = ObCreateObjectEx(
                PreviousMode,
                ObpDirectoryObjectType,
                v4,
                PreviousMode,
                v31,
                *((_DWORD *)P + 6) + 392,
                0,
                0,
                &Object,
                0LL);
        if ( v12 >= 0 )
        {
          v13 = Object;
          memset_0(Object, 0, (unsigned int)v11);
          v14 = ((unsigned __int64)v13 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v14 + 8) = v14;
          *(_QWORD *)v14 = v14;
          v15 = v9[3];
          *(_QWORD *)(v14 + 24) = v15;
          *(_QWORD *)(v14 + 16) = 0LL;
          *(_BYTE *)(v14 + 40) = *((_BYTE *)v9 + 40);
          memmove((void *)(v14 + 48), v9 + 6, v15);
          ExFreePoolWithTag(v9, 0x534E624Fu);
          v13[37] = 0LL;
          *((_DWORD *)v13 + 85) = -1;
          *((_DWORD *)v13 + 84) = 1;
          if ( (*((_BYTE *)v13 - 22) & 2) != 0 )
            v16 = (__int64)v13 - ObpInfoMaskToOffset[*((_BYTE *)v13 - 22) & 3] - 48;
          else
            v16 = 0LL;
          if ( v16 )
          {
            v17 = -1073741773;
          }
          else
          {
            v17 = ObpRegisterPrivateNamespace(((unsigned __int64)v13 + 351) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v17 >= 0 )
            {
              PsReferenceSiloContext(v13);
              inserted = ObInsertObjectEx((char *)v13, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v34);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v21 = (unsigned __int64 *)&CurrentServerSiloGlobals[45];
              v22 = KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[45], 0LL);
              v23 = v22;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[45], 0LL) )
                ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
              if ( v23 )
                *((_BYTE *)v23 + 10) = 1;
              if ( inserted < 0 || (v13[42] & 2) != 0 )
              {
                v24 = *(_QWORD *)v14;
                v25 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v25 != v14 )
                  __fastfail(3u);
                *v25 = v24;
                *(_QWORD *)(v24 + 8) = v25;
                --LODWORD(CurrentServerSiloGlobals[45].Blink);
                ObfDereferenceObject(Object);
              }
              else
              {
                v26 = Object;
                *(_QWORD *)(v14 + 16) = Object;
                v26[40] = v14;
              }
              _m_prefetchw(v21);
              v27 = *v21;
              v28 = *v21 - 16;
              if ( (*v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v28 = 0LL;
              if ( (v27 & 2) != 0
                || (v29 = *v21, v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v21, v28, v27)) )
              {
                ExfReleasePushLock(v21);
              }
              KeAbPostRelease((ULONG_PTR)v21);
              KeLeaveCriticalRegion();
              if ( inserted >= 0 )
                *NamespaceHandle = (HANDLE)v34;
              return inserted;
            }
          }
          ObfDereferenceObject(v13);
          return v17;
        }
        v10 = v12;
      }
    }
    ExFreePoolWithTag(v9, 0x534E624Fu);
    return v10;
  }
  return result;
}
