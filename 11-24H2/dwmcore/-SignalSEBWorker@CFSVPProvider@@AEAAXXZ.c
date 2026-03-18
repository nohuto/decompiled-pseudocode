/*
 * XREFs of ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x18027E49C
 * Callers:
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x18009B8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     _lambda_a29cc3fe718aa785b8a158e67bed590f_::_lambda_invoker_cdecl_ @ 0x18027E3D0 (_lambda_a29cc3fe718aa785b8a158e67bed590f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     McTemplateU0zttq_EventWriteTransfer @ 0x18024C08C (McTemplateU0zttq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18024DD30 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CFSVPProvider::SignalSEBWorker(CFSVPProvider *this)
{
  char updated; // bp
  char v3; // si
  char v4; // di
  char v5; // al
  char v6; // al
  __int64 v7; // rdx
  struct _SEB_RPC_PUBLISH_DATA *v8; // rcx
  __int64 v9; // r8
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  updated = 0;
  v3 = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = *((_BYTE *)this + 73);
  if ( v5 != *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 75) = v5;
    v3 = 1;
  }
  v6 = *((_BYTE *)this + 74);
  if ( v6 != *((_BYTE *)this + 76) )
  {
    *((_BYTE *)this + 76) = v6;
    v4 = 1;
  }
  *((_BYTE *)this + 72) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  if ( v3 )
  {
    v8 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 1);
    if ( v8 )
      updated = PubSebiUpdateLevelEventRpc(v8, *((_BYTE *)this + 75) != 0);
  }
  if ( v4 )
  {
    v8 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2);
    if ( v8 )
      PubSebiUpdateLevelEventRpc(v8, *((_BYTE *)this + 76) != 0);
  }
  if ( (v3 || v4) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0zttq_EventWriteTransfer(
      (__int64)v8,
      v7,
      v9,
      *((unsigned __int8 *)this + 75),
      *((_BYTE *)this + 76),
      updated);
}
