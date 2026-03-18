/*
 * XREFs of DebugNotify @ 0x14006DE70
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     _strupr_0 @ 0x14005678B (_strupr_0.c)
 *     IsNumber @ 0x14006E528 (IsNumber.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, _BYTE *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  __int64 ObjectPath; // rax
  const char *v8; // rdx
  void *v9; // rdi

  v4 = 0;
  if ( a2 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( (unsigned __int8)IsNumber(a2, 16LL) )
          goto LABEL_17;
        PrintDebugMessage(0xDDu, a2, 0LL, 0LL, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2, 0LL, (__int64)&qword_1400892F8, 1u) )
      {
        PrintDebugMessage(0xE7u, a2, 0LL, 0LL, 0LL);
LABEL_11:
        v4 = -2;
      }
    }
  }
  else
  {
    if ( a4 != 2 )
    {
LABEL_10:
      PrintDebugMessage(0xDEu, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1400892F8);
    v8 = byte_1400753E8;
    v9 = (void *)ObjectPath;
    if ( ObjectPath )
      v8 = (const char *)ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v8, qword_1400892F0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ghNotify(2LL, (unsigned int)qword_1400892F0, qword_1400892F8 + 120, qword_140088E68, DummyCallBack, 0LL);
  }
LABEL_17:
  if ( qword_1400892F8 )
    DereferenceObjectEx(qword_1400892F8);
  return v4;
}
