/*
 * XREFs of ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1400777A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x140077844 (-PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 */

void __fastcall SaveMessageInfoHandle(struct tagTHREADINFO *a1, struct tagMSG *a2)
{
  int v2; // eax
  struct tagMSG *v3; // rbx
  __int64 v5; // rcx

  v2 = *((_DWORD *)a2 + 2);
  v3 = a2;
  if ( v2 == 255 )
  {
    if ( *((_QWORD *)a2 + 2) <= 1uLL )
      PrepareToReturnHidData(a1, *((_QWORD *)a2 + 3));
  }
  else if ( v2 == 576 && (v5 = *((_QWORD *)a2 + 3), LOBYTE(a2) = 20, HMValidateHandleWithDescriptor(v5, a2)) )
  {
    *((_QWORD *)a1 + 149) = *((_QWORD *)v3 + 3);
  }
  else if ( ((*((_DWORD *)v3 + 2) - 281) & 0xFFFFFFFD) == 0 )
  {
    LOBYTE(a2) = 21;
    if ( HMValidateHandleWithDescriptor(*((_QWORD *)v3 + 3), a2) )
      *((_QWORD *)a1 + 150) = *((_QWORD *)v3 + 3);
  }
}
