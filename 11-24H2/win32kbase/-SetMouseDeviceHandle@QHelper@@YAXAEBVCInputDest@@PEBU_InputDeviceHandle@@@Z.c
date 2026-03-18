/*
 * XREFs of ?SetMouseDeviceHandle@QHelper@@YAXAEBVCInputDest@@PEBU_InputDeviceHandle@@@Z @ 0x14021E8E8
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

void __fastcall QHelper::SetMouseDeviceHandle(
        QHelper *this,
        const struct CInputDest *a2,
        const struct _InputDeviceHandle *a3)
{
  __int64 Queue; // rcx
  __int128 *v5; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // xmm1_8
  _DWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h]

  Queue = CInputDest::GetQueue(this, 2);
  if ( Queue )
  {
    if ( a2 )
    {
      v5 = &v10;
      v6 = *((_QWORD *)a2 + 2);
      v10 = *(_OWORD *)a2;
      v11 = v6;
    }
    else
    {
      v8[0] = 0;
      v8[1] = 0;
      v5 = (__int128 *)v8;
      v9 = 0LL;
    }
    v7 = *((_QWORD *)v5 + 2);
    *(_OWORD *)(Queue + 224) = *v5;
    *(_QWORD *)(Queue + 240) = v7;
  }
}
