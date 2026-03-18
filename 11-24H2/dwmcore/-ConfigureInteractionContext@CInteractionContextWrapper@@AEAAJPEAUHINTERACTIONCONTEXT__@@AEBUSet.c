/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801FCF6C
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x1801FCEB0 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1801FCEEC (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180094CB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  _BYTE *v3; // rax
  struct HINTERACTIONCONTEXT__ *v4; // r12
  _BYTE *v7; // rax
  char v8; // r13
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  char v11; // r14
  _BYTE *v12; // rax
  char v13; // bl
  int v14; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // [rsp+50h] [rbp-19h]
  char v26; // [rsp+51h] [rbp-18h]
  int v27; // [rsp+54h] [rbp-15h] BYREF
  int v28; // [rsp+58h] [rbp-11h] BYREF
  int v29; // [rsp+5Ch] [rbp-Dh] BYREF
  unsigned int v30; // [rsp+60h] [rbp-9h] BYREF
  CInteractionContextWrapper *v31; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v32[6]; // [rsp+70h] [rbp+7h] BYREF

  v3 = (char *)a3 + 4;
  v4 = a2;
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v3 & 0x40) != 0 )
    {
LABEL_3:
      v25 = 1;
      goto LABEL_4;
    }
  }
  else if ( *(_DWORD *)a3 == 3 )
  {
    if ( (*v3 & 0x40) != 0 )
      goto LABEL_3;
LABEL_41:
    if ( *(_DWORD *)a3 != 6 )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( *(_DWORD *)a3 != 4 )
    goto LABEL_41;
LABEL_34:
  if ( (*v3 & 0x40) != 0 )
    goto LABEL_3;
LABEL_35:
  v25 = 0;
LABEL_4:
  v7 = (char *)a3 + 4;
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v7 & 0x80) != 0 )
    {
LABEL_6:
      v8 = 1;
      goto LABEL_7;
    }
  }
  else if ( *(_DWORD *)a3 == 3 )
  {
    if ( (*v7 & 0x80) != 0 )
      goto LABEL_6;
LABEL_30:
    if ( *(_DWORD *)a3 != 6 )
      goto LABEL_31;
    goto LABEL_27;
  }
  if ( *(_DWORD *)a3 != 4 )
    goto LABEL_30;
LABEL_27:
  if ( (*v7 & 0x80) != 0 )
    goto LABEL_6;
LABEL_31:
  v8 = 0;
LABEL_7:
  v9 = (char *)a3 + 4;
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v9 & 3) != 0 )
    {
LABEL_9:
      v26 = 1;
      goto LABEL_10;
    }
  }
  else if ( *(_DWORD *)a3 == 3 )
  {
    if ( (*v9 & 3) != 0 )
      goto LABEL_9;
LABEL_23:
    if ( *(_DWORD *)a3 != 6 )
      goto LABEL_24;
    goto LABEL_71;
  }
  if ( *(_DWORD *)a3 != 4 )
    goto LABEL_23;
LABEL_71:
  if ( (*v9 & 3) != 0 )
    goto LABEL_9;
LABEL_24:
  v26 = 0;
LABEL_10:
  v10 = (char *)a3 + 4;
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v10 & 0xC) != 0 )
    {
LABEL_12:
      v11 = 1;
      goto LABEL_13;
    }
  }
  else if ( *(_DWORD *)a3 == 3 )
  {
    if ( (*v10 & 0xC) != 0 )
      goto LABEL_12;
LABEL_74:
    if ( *(_DWORD *)a3 != 6 )
      goto LABEL_76;
    goto LABEL_75;
  }
  if ( *(_DWORD *)a3 != 4 )
    goto LABEL_74;
LABEL_75:
  if ( (*v10 & 0xC) != 0 )
    goto LABEL_12;
LABEL_76:
  v11 = 0;
LABEL_13:
  v12 = (char *)a3 + 4;
  LOBYTE(a2) = 48;
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( *(_DWORD *)a3 == 3 )
    {
      if ( (*v12 & 0x30) != 0 )
        goto LABEL_15;
      goto LABEL_38;
    }
LABEL_37:
    if ( *(_DWORD *)a3 == 4 )
    {
LABEL_77:
      if ( (*v12 & 0x30) != 0 )
        goto LABEL_15;
LABEL_39:
      v13 = 0;
      goto LABEL_16;
    }
LABEL_38:
    if ( *(_DWORD *)a3 != 6 )
      goto LABEL_39;
    goto LABEL_77;
  }
  if ( (*v12 & 0x30) == 0 )
    goto LABEL_37;
LABEL_15:
  v13 = 1;
LABEL_16:
  v14 = ResetInteractionContext(v4, a2);
  if ( v14 >= 0 )
  {
    v14 = SetPropertyInteractionContext(v4, 1LL);
    if ( v14 >= 0 )
    {
      v14 = SetPropertyInteractionContext(v4, 3LL);
      if ( v14 >= 0 )
      {
        v14 = SetPropertyInteractionContext(v4, 2LL);
        if ( v14 >= 0 )
        {
          v16 = ((~*((_BYTE *)a3 + 16) & 2) << 10) | 1;
          if ( *((float *)a3 + 2) != 0.0 )
            v16 = ((~*((_BYTE *)a3 + 16) & 2) << 10) | 0x101;
          if ( *((float *)a3 + 3) != 0.0 )
            v16 |= 0x200u;
          v17 = v16 | 2;
          if ( !v26 )
            v17 = v16;
          v18 = v17 | 4;
          if ( !v11 )
            v18 = v17;
          v19 = v18 | 0x10;
          if ( !v13 )
            v19 = v18;
          v20 = v19 | 0x10000000;
          if ( *(_DWORD *)a3 != 3 )
            v20 = v19;
          v21 = v20 | 0x40000000;
          if ( (*((_BYTE *)a3 + 16) & 1) == 0 )
            v21 = v20;
          if ( *((_DWORD *)a3 + 5) == 1 )
          {
            v21 = v21 & 0x7FFFFCFF | 0x80000100;
          }
          else if ( *((_DWORD *)a3 + 5) == 2 )
          {
            v21 = v21 & 0x7FFFFCFF | 0x80000200;
          }
          v32[0] = 1;
          v32[1] = v21;
          v32[2] = 2;
          v32[4] = 4;
          v32[3] = v25 != 0 ? 5 : 0;
          v32[5] = v8 != 0 ? 5 : 0;
          v14 = SetInteractionConfigurationInteractionContext(v4, 3LL, v32);
          if ( (unsigned int)dword_1803F8D18 > 4
            && (byte_1803F8D28 & 2) != 0
            && (qword_1803F8D30 & 2) == qword_1803F8D30 )
          {
            v27 = v14;
            v28 = v8 != 0 ? 5 : 0;
            v29 = v25 != 0 ? 5 : 0;
            v30 = v21;
            v31 = this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v22,
              byte_1803CFA53,
              v23,
              v24,
              (__int64)&v31,
              (__int64)&v30,
              (__int64)&v29,
              (__int64)&v28,
              (__int64)&v27);
          }
          if ( v14 >= 0 )
          {
            v14 = RegisterOutputCallbackInteractionContext(
                    v4,
                    CInteractionContextWrapper::s_InteractionContextCallback,
                    this);
            if ( v14 >= 0 && (!v25 && *((_DWORD *)this + 6) == 2 || !v8 && *((_DWORD *)this + 6) == 4) )
              *((_QWORD *)this + 3) = 0LL;
          }
        }
      }
    }
  }
  return (unsigned int)v14;
}
