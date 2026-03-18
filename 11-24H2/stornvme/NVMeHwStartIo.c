/*
 * XREFs of NVMeHwStartIo @ 0x140018740
 * Callers:
 *     <none>
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     GetSrbScsiAddress @ 0x14000B750 (GetSrbScsiAddress.c)
 *     NVMeControllerPowerDown @ 0x1400109D0 (NVMeControllerPowerDown.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // esi
  __int64 v6; // rdx
  __int64 SrbExtension; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // ecx
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int8 v16; // r9
  char v17; // r8
  char v18; // dl
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+10h] BYREF
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v4 == 40 )
    v5 = *(_DWORD *)(a2 + 20);
  else
    v5 = v4;
  SrbExtension = GetSrbExtension(a2);
  if ( a1 && (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
    return 1;
  if ( v5 && v5 != 2 )
  {
    if ( v5 == 7 )
    {
      v20 = 0;
      if ( *(_BYTE *)(a1 + 20) )
        NVMeControllerPowerDown(a1, v6, v8, v9);
      GetSrbScsiAddress(a2, &v22, &v21, &v20);
      if ( v20 < *(_DWORD *)(a1 + 224) )
      {
        v14 = *(_QWORD *)(a1 + 8LL * v20 + 1672);
        if ( v14 )
          *(_DWORD *)(v14 + 20) |= 2u;
      }
      goto LABEL_28;
    }
    if ( v5 != 9 && v5 != 10 )
    {
      if ( v5 == 37 )
      {
        if ( (_BYTE)v6 == 40 )
        {
          v10 = *(unsigned int *)(a2 + 120);
          v11 = *(_DWORD *)(v10 + a2 + 12);
          v12 = *(_DWORD *)(v10 + a2 + 16) == 1;
        }
        else
        {
          v11 = *(_DWORD *)(a2 + 8);
          v12 = *(_DWORD *)(a2 + 64) == 1;
        }
        if ( v12 )
        {
          if ( v11 == 2 || v11 == 23 )
          {
            v13 = *(_DWORD *)(a1 + 24) & 0xFFFFFDF6 | 8;
            goto LABEL_21;
          }
          if ( v11 == 4 )
          {
            v13 = *(_DWORD *)(a1 + 24) & 0xFFFFFDFC | 2;
LABEL_21:
            *(_DWORD *)(a1 + 24) = v13;
LABEL_28:
            *(_BYTE *)(a2 + 3) = 1;
            goto LABEL_34;
          }
        }
      }
      *(_BYTE *)(a2 + 3) = 6;
      goto LABEL_34;
    }
  }
  v15 = *(_DWORD *)(a1 + 24);
  if ( (v15 & 1) != 0 )
  {
    if ( (v15 & 0x10) == 0 )
      goto LABEL_34;
    v16 = 0;
    v18 = 14;
    v17 = 0;
  }
  else
  {
    v16 = 37;
    v17 = 5;
    v18 = 8;
  }
  NVMeSetSenseData(a2, v18, v17, v16);
LABEL_34:
  if ( *(_BYTE *)(a2 + 3) )
  {
    StorPortNotification(0LL, a1, a2);
  }
  else
  {
    ProcessCommand(a1, a2);
    if ( v5 == 10 && (*(_BYTE *)(SrbExtension + 4225) & 0x21) == 1 )
      WaitForCommandComplete(a1, a2, 1u);
  }
  return 1;
}
