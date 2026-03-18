/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1400C0600
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     IrqLibAcquireArbiterLock @ 0x14004F218 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1400564C4 (IrqLibReleaseArbiterLock.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = 0;
  *((_DWORD *)Context + 49) = 0;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v3 = AMLIGetNamedChild(*((__int64 **)Context + 95), 1397310559);
  v4 = (__int64)v3;
  if ( v3 )
  {
    AMLIEvalNameSpaceObject(v3, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v4);
  }
  IrqLibAcquireArbiterLock(0);
  v5 = (_QWORD *)qword_1400898D8;
  v6 = Context + 216;
  if ( *(__int64 **)qword_1400898D8 != &LinkNodeListHead )
    __fastfail(3u);
  *v6 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v5;
  *v5 = v6;
  qword_1400898D8 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
