/*
 * XREFs of CrmSrvRegister @ 0x18003DBE0
 * Callers:
 *     CrmGlobalsStartCrmRegistrations @ 0x18007B7A8 (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmRegistrationCleanup @ 0x180030E04 (CrmRegistrationCleanup.c)
 *     CrmLogSrvRegisterStart @ 0x18003E0B0 (CrmLogSrvRegisterStart.c)
 *     CrmLogSrvRegisterStop @ 0x18003E3E0 (CrmLogSrvRegisterStop.c)
 *     CrmRegistrationStart @ 0x18003E788 (CrmRegistrationStart.c)
 *     CrmRegistrationInitialize @ 0x18003EA70 (CrmRegistrationInitialize.c)
 */

__int64 __fastcall CrmSrvRegister(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *Heap; // rax
  unsigned int v10; // ebx
  _QWORD *v11; // rdi
  int v12; // r15d

  CrmLogSrvRegisterStart();
  if ( a2 >= 309 )
  {
    v10 = -1073741811;
  }
  else
  {
    Heap = HampAllocateHeap(0x98uLL);
    v10 = 0;
    v11 = Heap;
    if ( Heap )
    {
      CrmRegistrationInitialize(Heap);
      v12 = CrmRegistrationStart(v11, a4, (unsigned int)a2, a5);
      if ( v12 < 0 )
      {
        CrmRegistrationCleanup(v11, 1);
        HampFreeHeap(v11);
        v10 = v12;
      }
      else
      {
        *a1 = v11;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  CrmLogSrvRegisterStop((unsigned int)a2, a3, a4, v10);
  return v10;
}
