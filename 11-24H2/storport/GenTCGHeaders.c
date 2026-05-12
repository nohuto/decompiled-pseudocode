/*
 * XREFs of GenTCGHeaders @ 0x140143434
 * Callers:
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 *     TcglibpCloseSession @ 0x14014155C (TcglibpCloseSession.c)
 *     TcglibpTransaction @ 0x140141BA4 (TcglibpTransaction.c)
 * Callees:
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 */

__int64 __fastcall GenTCGHeaders(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // [rsp+20h] [rbp-10h]
  unsigned int v14; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 >= (unsigned __int64)a4 + 56 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    LOWORD(v14) = *(_WORD *)(a3 + 24);
    TcglibReverseBytes((char *)&v14, 2u);
    *(_WORD *)(a1 + 4) = v14;
    v14 = (a4 + 39) & 0xFFFFFFFC;
    TcglibReverseBytes((char *)&v14, 4u);
    v9 = a5;
    *(_DWORD *)(a1 + 16) = v14;
    *(_DWORD *)(a1 + 20) = v9;
    TcglibReverseBytes((char *)(a1 + 20), 4u);
    *(_DWORD *)(a1 + 24) = a6;
    TcglibReverseBytes((char *)(a1 + 24), v10);
    v14 = ((a4 + 39) & 0xFFFFFFFC) - 24;
    TcglibReverseBytes((char *)&v14, v11);
    *(_DWORD *)(a1 + 40) = v14;
    v14 = a4;
    TcglibReverseBytes((char *)&v14, v12);
    result = 0LL;
    *(_DWORD *)(a1 + 52) = v14;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v13 = a4 + 56;
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        a2,
        v13);
    }
    return 3221225507LL;
  }
  return result;
}
