/*
 * XREFs of ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1400FE1F8
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1400FD160 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400FDFC8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z @ 0x1400FE3A0 (-TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  unsigned __int8 v2; // di
  __int64 v3; // rbx
  unsigned int DoNotUseThisField_low; // r15d
  unsigned int v7; // r12d
  __int64 v8; // rdx
  int v9; // r14d
  __int64 Pool2; // rcx
  int v11; // eax
  _DWORD v12[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v13; // [rsp+58h] [rbp-51h]
  __int64 v14; // [rsp+60h] [rbp-49h]
  int v15; // [rsp+68h] [rbp-41h]
  int v16; // [rsp+6Ch] [rbp-3Dh]
  __int128 v17; // [rsp+70h] [rbp-39h]
  _QWORD v18[10]; // [rsp+80h] [rbp-29h] BYREF

  v12[1] = 0;
  v2 = 0;
  v16 = 0;
  v3 = 0LL;
  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v7 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  if ( a2->u1.s1.DataLength == 24 )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1229147459LL);
    if ( Pool2 )
    {
      v11 = 0;
      *(_DWORD *)(Pool2 + 16) = 1;
      v3 = Pool2;
    }
    else
    {
      v11 = -1073741801;
    }
    v2 = v11 == 0;
  }
  v13 = 0LL;
  v14 = 0LL;
  v12[0] = 48;
  v15 = 512;
  v17 = 0LL;
  memset(v18, 0, 0x48uLL);
  v8 = *((_QWORD *)a1 + 1);
  LODWORD(v18[0]) = 0x100000;
  v18[2] = 0xFFFFLL;
  v9 = ZwAlpcAcceptConnectPort(v3 & -(__int64)(v2 != 0), v8, 0LL, v12, v18, v3 & -(__int64)(v2 != 0), a2, 0LL, v2);
  if ( v9 >= 0 && v2 )
  {
    *(_DWORD *)(v3 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v3 + 12) = v7;
    *(_QWORD *)(v3 + 24) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = v3;
  }
  else if ( v3 )
  {
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v3);
  }
  CoreMessagingK::Log::TraceConnectionRequest(a1, v2, v9, DoNotUseThisField_low, v7);
}
