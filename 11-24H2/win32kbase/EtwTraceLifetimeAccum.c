/*
 * XREFs of EtwTraceLifetimeAccum @ 0x14007C070
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x14007B5B4 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x14007BD80 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ?vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z @ 0x14007BF10 (-vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

void __fastcall EtwTraceLifetimeAccum(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  const struct REGION_CORE *v8; // rdx
  char *v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  _OWORD *v12; // rdi
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
      && (qword_14029ADB0 & 0x8000000000001000uLL) != 0
      && (qword_14029ADB8 & 0x8000000000001000uLL) == qword_14029ADB8 )
    {
      v15 = a3;
      v6 = RGNOBJ::sizeSave((RGNOBJ *)&v15, (const struct REGION_CORE *)0x8000000000001000LL);
      v7 = v6 + 32;
      if ( v6 != -32 )
      {
        v9 = (char *)Win32AllocPoolImpl(0x100uLL, v7, 0x79737355u);
        if ( v9 )
        {
          v15 = a3;
          v10 = RGNOBJ::sizeSave((RGNOBJ *)&v15, v8);
          v11 = v10 + 32;
          if ( v10 + 32 <= v7 )
          {
            *(_DWORD *)v9 = 32;
            v12 = v9 + 16;
            *((_DWORD *)v9 + 1) = 1;
            *((_DWORD *)v9 + 2) = v10 >> 4;
            *((_DWORD *)v9 + 3) = v10;
            if ( v10 >> 4 )
            {
              *v12 = *(_OWORD *)(a3 + 52);
            }
            else
            {
              *(_DWORD *)v12 = 0;
              *((_DWORD *)v9 + 5) = 0;
              *((_DWORD *)v9 + 6) = 0;
              *((_DWORD *)v9 + 7) = 0;
            }
            RGNOBJ::vDownload((RGNOBJ *)&v15, (struct _RECTL *)v9 + 2, v10 >> 4);
            if ( v11 )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                McTemplateK0xqnqNR3_EtwWriteTransfer(v13, &ModifyRgnEvent, v14, a1, a2);
            }
          }
          GreDeleteFastMutex(v9);
        }
      }
    }
  }
}
