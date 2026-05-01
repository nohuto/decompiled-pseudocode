/*
 * XREFs of CrmRegister @ 0x180008990
 * Callers:
 *     AcpAcquireClientRegistration @ 0x18001BA9C (AcpAcquireClientRegistration.c)
 * Callees:
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180008A40 (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x180008DA8 (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 *     HamFreeBuffer @ 0x1800091E0 (HamFreeBuffer.c)
 */

__int64 __fastcall CrmRegister(struct _CRMP_REGISTRATION_CONTEXT **a1, unsigned int a2, __int64 a3)
{
  struct _CRMP_REGISTRATION_CONTEXT *Heap; // rbx
  int v7; // edi

  Heap = (struct _CRMP_REGISTRATION_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)Heap = 0LL;
  *((_QWORD *)Heap + 2) = 0LL;
  *(_DWORD *)Heap = 309;
  v7 = CrmpRegistrationContextStart(Heap, a2, a3);
  if ( v7 >= 0 )
  {
    *a1 = Heap;
    return 0LL;
  }
  else
  {
    CrmpRegistrationContextCleanup(Heap);
    HamFreeBuffer(Heap);
    return (unsigned int)v7;
  }
}
