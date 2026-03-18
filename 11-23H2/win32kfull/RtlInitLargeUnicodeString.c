/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C00E34E8
 * Callers:
 *     xxxSetInformationThread @ 0x1C002A9A0 (xxxSetInformationThread.c)
 *     NtUserfnINSTRINGNULL @ 0x1C00E3150 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C00E3260 (NtUserfnINLPCREATESTRUCT.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00E3750 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C013B328 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C7D50 (EditionxxxBroadcastSPIChange.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01CB958 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C01E0D50 (NtUserfnINLPMDICREATESTRUCT.c)
 *     NtUserfnINSTRING @ 0x1C01E1C40 (NtUserfnINSTRING.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r8d

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) &= ~0x80000000;
  result = 0LL;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a2 + 2 * v4) );
    v5 = 2 * v4;
    result = (2 * (_DWORD)v4 + 2) & 0x7FFFFFFF;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
