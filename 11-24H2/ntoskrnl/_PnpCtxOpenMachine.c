/*
 * XREFs of _PnpCtxOpenMachine @ 0x140817DD0
 * Callers:
 *     PiPnpRtlInit @ 0x1407247D4 (PiPnpRtlInit.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140727F68 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     _PnpCtxCreateNode @ 0x1408179EC (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x140817B70 (_PnpCtxDestroyNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxOpenMachine(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 *v7; // r15
  __int64 Pool2; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  int Node; // edi
  UNICODE_STRING *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  UNICODE_STRING **Buffer; // rax
  UNICODE_STRING *v18; // rsi
  UNICODE_STRING *v19; // rcx
  wchar_t *v20; // rdx
  struct _ERESOURCE *v21; // rax
  struct _ERESOURCE *v22; // rbp
  __int64 v24; // [rsp+28h] [rbp-40h]
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v7 = a7;
  P = 0LL;
  *a7 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL, 0x210uLL, 0x52504E50u);
  v12 = Pool2;
  if ( Pool2 )
  {
    v14 = (UNICODE_STRING *)(Pool2 + 8);
    *(_DWORD *)Pool2 = 167772160;
    *(_BYTE *)(Pool2 + 4) = 0;
    v15 = 4LL;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    v16 = (_QWORD *)(Pool2 + 24);
    *(_QWORD *)&v14->Length = v14;
    do
    {
      v16[1] = v16;
      *v16 = v16;
      v16 += 2;
      --v15;
    }
    while ( v15 );
    Node = PnpCtxCreateNode((int *)v12, L"SYSTEM", 1, v11, a2, v24, a4, 0LL, (UNICODE_STRING **)&P);
    if ( Node < 0 )
    {
      v18 = (UNICODE_STRING *)P;
    }
    else
    {
      Buffer = (UNICODE_STRING **)v14->Buffer;
      if ( *Buffer != v14
        || (v18 = (UNICODE_STRING *)P,
            *((_QWORD *)P + 1) = Buffer,
            v19 = v18 + 1,
            *(_QWORD *)&v18->Length = v14,
            *Buffer = v18,
            v14->Buffer = &v18->Length,
            v20 = *(wchar_t **)(v12 + 48),
            *(_QWORD *)v20 != v12 + 40) )
      {
        __fastfail(3u);
      }
      v18[1].Buffer = v20;
      *(_QWORD *)&v19->Length = v12 + 40;
      *(_QWORD *)v20 = v19;
      *(_QWORD *)(v12 + 48) = v19;
      *(_QWORD *)(v12 + 88) = v18;
      *(_QWORD *)(v12 + 224) = v18[3].Buffer;
      v21 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL, 0x68uLL, 0x52504E50u);
      v22 = v21;
      if ( v21 )
      {
        Node = ExInitializeResourceLite(v21);
        if ( Node < 0 )
        {
          ExFreePoolWithTag(v22, 0);
        }
        else
        {
          *(_QWORD *)(v12 + 232) = 0LL;
          *(_QWORD *)(v12 + 488) = 0LL;
          *(_QWORD *)(v12 + 496) = 0LL;
          *(_QWORD *)(v12 + 504) = 0LL;
          *(_QWORD *)(v12 + 512) = 0LL;
          *(_QWORD *)(v12 + 520) = 0LL;
          *(_QWORD *)(v12 + 240) = v22;
          *(_QWORD *)(v12 + 304) = PnpDispatchDevice;
          *(_QWORD *)(v12 + 312) = PnpDispatchInstallerClass;
          *(_QWORD *)(v12 + 320) = PnpDispatchDeviceInterface;
          *(_QWORD *)(v12 + 328) = PnpDispatchInterfaceClass;
          *(_QWORD *)(v12 + 336) = PnpDispatchDeviceContainer;
          *(_QWORD *)(v12 + 344) = PnpDispatchDevicePanel;
          *v7 = v12;
          v12 = 0LL;
          v18 = 0LL;
        }
      }
      else
      {
        Node = -1073741801;
      }
    }
    if ( v18 )
      PnpCtxDestroyNode(v18);
    if ( v12 )
      ExFreePoolWithTag((PVOID)v12, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Node;
}
