/*
 * XREFs of Interrupter_ReleaseInterrupter @ 0x14007CB60
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A3B0 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     XilCommonBuffer_ReleaseBuffer @ 0x140003428 (XilCommonBuffer_ReleaseBuffer.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     XilRegister_WriteUlong64 @ 0x14000C120 (XilRegister_WriteUlong64.c)
 */

void __fastcall Interrupter_ReleaseInterrupter(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  _QWORD **v10; // rdi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  struct _IO_WORKITEM *v13; // rcx
  __int64 v14; // rdx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(__int64 **)(a1 + 8);
  v3 = v2[15];
  v4 = v2[11];
  if ( *(_DWORD *)(a1 + 116) == 1 )
  {
    if ( (v2[93] & 0x400) == 0 )
    {
      v5 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
      if ( *(_BYTE *)(v4 + 137) )
      {
        *v5 = 0;
        _InterlockedOr(v15, 0);
      }
      else
      {
        XilRegister_WriteUlong(v2[11], v5, 0);
      }
      v6 = *(_QWORD *)(a1 + 24);
      v7 = (_DWORD *)(v6 + 16);
      if ( *(_BYTE *)(v4 + 137) )
      {
        if ( (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 736LL) & 1) != 0 )
        {
          *v7 = 0;
          _InterlockedOr(v15, 0);
          *(_DWORD *)(v6 + 20) = 0;
        }
        else
        {
          *(_QWORD *)v7 = 0LL;
        }
        _InterlockedOr(v15, 0);
      }
      else
      {
        XilRegister_WriteUlong64(v4, v7, 0LL);
      }
      v8 = *(_QWORD *)(a1 + 24);
      v9 = (_DWORD *)(v8 + 24);
      if ( *(_BYTE *)(v4 + 137) )
      {
        if ( (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 736LL) & 1) != 0 )
        {
          *v9 = 0;
          _InterlockedOr(v15, 0);
          *(_DWORD *)(v8 + 28) = 0;
        }
        else
        {
          *(_QWORD *)v9 = 0LL;
        }
        _InterlockedOr(v15, 0);
      }
      else
      {
        XilRegister_WriteUlong64(v4, v9, 0LL);
      }
    }
    if ( *(_QWORD *)(a1 + 168) )
    {
      XilCommonBuffer_ReleaseBuffer(v3);
      *(_QWORD *)(a1 + 168) = 0LL;
    }
    v10 = (_QWORD **)(a1 + 176);
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == v10 )
        break;
      if ( (_QWORD **)v11[1] != v10 || (v12 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
        __fastfail(3u);
      *v10 = v12;
      v12[1] = v10;
      XilCommonBuffer_ReleaseBuffer(v3);
    }
    v13 = *(struct _IO_WORKITEM **)(a1 + 216);
    if ( v13 )
    {
      IoFreeWorkItem(v13);
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    v14 = *(_QWORD *)(a1 + 16);
    if ( v14 && v14 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 116) = 2;
}
