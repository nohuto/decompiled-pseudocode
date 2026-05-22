/*
 * XREFs of ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180198400
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BA680 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180197B10 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::SynthesizeMouseInput(struct InputInfo *a1)
{
  bool v2; // cf
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+2Ch] [rbp-24h]
  __int64 v11; // [rsp+30h] [rbp-20h]
  __int16 v12; // [rsp+38h] [rbp-18h]
  __int16 v13; // [rsp+3Ah] [rbp-16h]
  __int16 v14; // [rsp+3Ch] [rbp-14h]
  __int16 v15; // [rsp+3Eh] [rbp-12h]
  int v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+44h] [rbp-Ch]
  __int64 v18; // [rsp+60h] [rbp+10h] BYREF

  v8 = *((unsigned int *)a1 + 1);
  v9 = *((_DWORD *)a1 + 2);
  v11 = *((_QWORD *)a1 + 2);
  v12 = *((_WORD *)a1 + 45);
  v13 = *((_WORD *)a1 + 46);
  v14 = *((_WORD *)a1 + 47);
  v16 = *((_DWORD *)a1 + 25);
  v17 = *((_DWORD *)a1 + 26);
  v2 = *((_BYTE *)a1 + 122) != 0;
  v10 = 0;
  v15 = 0;
  v18 = 0LL;
  v3 = (v2 ? 27 : 11) | 0x20;
  if ( !*((_BYTE *)a1 + 120) )
    v3 = v2 ? 27 : 11;
  v4 = v3 | 0x80;
  if ( !*((_BYTE *)a1 + 124) )
    v4 = v3;
  v5 = *((_DWORD *)a1 + 10);
  if ( v5 )
  {
    LODWORD(v18) = 2;
    HIDWORD(v18) = v5;
  }
  else
  {
    v6 = v18;
    if ( *((_DWORD *)a1 + 19) )
      v6 = 1;
    LODWORD(v18) = v6;
  }
  return (unsigned int)NtMITSynthesizeMouseInput(&v8, v4, &v18) == 0 ? 0x80070057 : 0;
}
