/*
 * XREFs of ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1801DFA10
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1801DFBE0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponse(CAsyncFlushResponse *this, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  const struct UCE_RDP_HEADER *v4; // rbp
  _DWORD *v5; // r14
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  int v8; // edi
  CInternalMilCmdConnection *v9; // rcx
  __int64 (__fastcall *v10)(CInternalMilCmdConnection *__hidden, const struct UCE_RDP_HEADER *); // rax
  int v11; // eax
  _OWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)this + 33) )
  {
    v3 = *((_QWORD *)this + 5);
    LODWORD(v13[0]) = 13;
    *((_BYTE *)this + 33) = 1;
    memset((char *)v13 + 4, 0, 20);
    v4 = 0LL;
    v5 = 0LL;
    DWORD2(v13[0]) = *((_DWORD *)this + 12);
    HIDWORD(v13[0]) = a2;
    v6 = MIDL_user_allocate(0x44uLL);
    v7 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x44uLL);
      *v7 = 10;
      v5 = v7 + 10;
      v7[1] = 68;
      v4 = (const struct UCE_RDP_HEADER *)v7;
      v7[10] = 13;
      v8 = 0;
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Du, 0LL);
    }
    operator delete(0LL);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xA5u, 0LL);
    }
    else
    {
      *(_OWORD *)v5 = v13[0];
      *((_QWORD *)v5 + 2) = *(_QWORD *)&v13[1];
      v5[6] = 0;
      *((_DWORD *)v4 + 4) = *(_DWORD *)(v3 + 24);
      v9 = *(CInternalMilCmdConnection **)(v3 + 56);
      v10 = *(__int64 (__fastcall **)(CInternalMilCmdConnection *__hidden, const struct UCE_RDP_HEADER *))(*(_QWORD *)v9 + 8LL);
      if ( v10 == CInternalMilCmdConnection::PostMessageToClient )
        v11 = CInternalMilCmdConnection::PostMessageToClient(v9, v4);
      else
        v11 = v10(v9, v4);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xADu, 0LL);
    }
    operator delete(v4);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x74u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x58u, 0LL);
    }
    return (unsigned int)v8;
  }
  return v2;
}
