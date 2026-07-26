/*
 * XREFs of NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8
 * Callers:
 *     NdisReturnNetBufferLists @ 0x140017B90 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x140018CE0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1400197A0 (NdisFReturnNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x140021180 (NdisMSendNetBufferListsComplete.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140074880 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007AA00 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall __noreturn NblContextVerifierBugcheckContextCorruption(ULONG_PTR a1, ULONG_PTR a2, unsigned __int8 *a3)
{
  ULONG_PTR v4; // r9
  int v5; // r8d
  int v6; // r8d
  ULONG_PTR BugCheckParameter4[5]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  v5 = *a3 - 5;
  if ( v5 )
  {
    v6 = v5 - 12;
    if ( v6 )
    {
      if ( v6 == 1 )
        v4 = *((_QWORD *)a3 + 2);
    }
    else
    {
      v4 = (ULONG_PTR)a3;
    }
  }
  else
  {
    v4 = *((_QWORD *)a3 + 4);
  }
  BugCheckParameter4[2] = a2;
  BugCheckParameter4[1] = a1;
  BugCheckParameter4[4] = v4;
  BugCheckParameter4[0] = 40LL;
  BugCheckParameter4[3] = (ULONG_PTR)a3;
  ndisBugCheckEx(0x32uLL, 0x81uLL, (ULONG_PTR)a3, (ULONG_PTR)BugCheckParameter4);
}
