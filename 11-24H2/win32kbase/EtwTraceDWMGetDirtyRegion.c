/*
 * XREFs of EtwTraceDWMGetDirtyRegion @ 0x14007A500
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x14007B5B4 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x14007BA4C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x14007BD80 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

void __fastcall EtwTraceDWMGetDirtyRegion(int a1, char a2, struct REGION *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  struct _RGNDATA *v8; // rax
  char *v9; // rbx
  int v10; // r8d
  struct REGION *v11; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
      && (qword_14029ADB0 & 0x8000000000001000uLL) != 0
      && (qword_14029ADB8 & 0x8000000000001000uLL) == qword_14029ADB8 )
    {
      v11 = a3;
      v6 = RGNOBJ::sizeSave((RGNOBJ *)&v11);
      v7 = v6 + 32;
      if ( v6 != -32 )
      {
        v8 = (struct _RGNDATA *)Win32AllocPoolImpl(0x100uLL, v7, 0x79737355u);
        v9 = (char *)v8;
        if ( v8 )
        {
          if ( GrepGetRegionPtrData(a3, v7, v8) )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              McTemplateK0xqnqNR3_EtwWriteTransfer((_DWORD)v9 + 16, (unsigned int)&DWMGetRgnEvent, v10, a1, a2);
          }
          GreDeleteFastMutex(v9);
        }
      }
    }
  }
}
