/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180024688
 * Callers:
 *     ??R_lambda_ab8afa584d195baf28431d185b201c0d_@@QEBA@XZ @ 0x18002C300 (--R_lambda_ab8afa584d195baf28431d185b201c0d_@@QEBA@XZ.c)
 *     ??R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ @ 0x1800733C4 (--R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ.c)
 * Callees:
 *     ??$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPackageManager@Deployment@Management@1@@Z @ 0x180024550 (--$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAU.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
        __int64 a1,
        _QWORD *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return Windows::Foundation::ActivateInstance<Windows::Management::Deployment::IPackageManager>(a1, a2);
}
