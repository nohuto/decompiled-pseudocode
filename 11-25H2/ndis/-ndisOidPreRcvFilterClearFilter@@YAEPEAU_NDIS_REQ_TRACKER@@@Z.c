/*
 * XREFs of ?ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140094EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

__int64 __fastcall ndisOidPreRcvFilterClearFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  unsigned __int8 v3; // bp
  __int64 v4; // r13
  unsigned int v5; // edi
  _BYTE *OidSourceHandle; // rax
  _BYTE *v7; // r14
  KIRQL v8; // al
  __int64 *v9; // rsi
  __int64 *v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-A8h]
  _BYTE v13[104]; // [rsp+60h] [rbp-68h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 40);
  v12 = *(_OWORD *)ndisCaptureIovOidContext(v13, a1);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0x10u )
    {
      if ( (_BYTE)v12 )
      {
        v5 = *(_DWORD *)(v4 + 12);
        if ( v5 )
        {
          OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
          v7 = OidSourceHandle;
          if ( OidSourceHandle && *OidSourceHandle == 18 )
          {
            v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)&v12 + 1) + 96LL));
            v9 = 0LL;
            v10 = *(__int64 **)(*((_QWORD *)&v12 + 1) + 3496LL);
            *(_QWORD *)(*((_QWORD *)&v12 + 1) + 520LL) = KeGetCurrentThread();
            if ( v10 != (__int64 *)(*((_QWORD *)&v12 + 1) + 3496LL) )
            {
              while ( *((_DWORD *)v10 + 12) != v5 )
              {
                if ( *((_DWORD *)v10 + 12) > v5 )
                  goto LABEL_17;
                v10 = (__int64 *)*v10;
                if ( v10 == (__int64 *)(*((_QWORD *)&v12 + 1) + 3496LL) )
                {
                  *(_QWORD *)(*((_QWORD *)&v12 + 1) + 520LL) = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)&v12 + 1) + 96LL), v8);
                  *((_DWORD *)a1 + 10) = -1073741811;
                  return v3;
                }
              }
              v9 = v10;
            }
LABEL_17:
            *(_QWORD *)(*((_QWORD *)&v12 + 1) + 520LL) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)&v12 + 1) + 96LL), v8);
            if ( v9 && (_BYTE *)v9[8] == v7 && *(_DWORD *)(v4 + 8) == *((_DWORD *)v9 + 36) )
              return 0;
            else
              *((_DWORD *)a1 + 10) = -1073741811;
          }
          else
          {
            *((_DWORD *)a1 + 10) = -1073741637;
          }
        }
        else
        {
          *((_DWORD *)a1 + 10) = -1073741811;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v3;
}
